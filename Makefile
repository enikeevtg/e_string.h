.PHONY: all clean test e_string.a gcov_report

# utilities
CC = gcc
AR = ar rs
RAN = ranlib
RM = rm -rf
MK = mkdir -p
LEAKS = CK_FORK=no leaks --atExit --
OS := $(shell uname)
ifeq ($(OS), Darwin)
	REPORT_OPEN = open
else ifeq ($(OS), Linux)
	REPORT_OPEN = xdg-open
endif

# utilities options
CF = -Wall -Werror -Wextra
STD = -std=c11 -pedantic
ASAN = -g -fsanitize=address
ifeq ($(OS), Darwin)
	TEST_FLAGS = -lcheck
else ifeq ($(OS), Linux)
	TEST_FLAGS = -lcheck -lsubunit -lm -lrt -lpthread -D_GNU_SOURCE
endif
GCOV_FLAGS = -fprofile-arcs -ftest-coverage

# filenames
TARGET = e_string.a
TEST_EXE = e_string_test
SRC_DIR = ./src/
OBJ_DIR = ./obj/
SRC = $(wildcard $(SRC_DIR)*.c)
OBJ = $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRC))
TESTS_DIR = ./tests/
TESTS_SRC = $(wildcard $(TESTS_DIR)*.c)


# functions
define library_build
	mkdir -p $(1)
	$(CC) $(CF) -c $(SRC_DIR)%.c -o $(1)%.o
endef
# function doesn't work with %

func:
	$(call library_build, $(OBJ_DIR))


all: clean test e_string.a gcov_report


# LIBRARY BUILDING
lib: clean e_string.a

e_string.a: objects 
	@$(AR) $(TARGET) $(OBJ)
	@$(RAN) $(TARGET)
	@echo "$(AR): creating library e_string.a \033[0;32msuccess\033[0m"

objects: objdir $(OBJ) obj_success

objdir:
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(CC) $(CF) -c $^ -o $@

obj_success:
	@echo "$(CC): objects compilation \033[0;32msuccess\033[0m"


# TESTS
test: lib
	$(CC) $(CF) $(TEST_FLAGS) $(GCOV_FLAGS) $(STD) $(ASAN) $(TESTS_SRC) $(TARGET) -o $(TEST_EXE)
	$(LEAKS) ./$(TEST_EXE)


# TESTS COVERING REPORT
gcov_report: lib
	$(CC) $(CF) $(TEST_FLAGS) $(GCOV_FLAGS) $(STD) $(ASAN) $(TESTS_SRC) $(SRC) -o $(TEST_EXE)
	./$(TEST_EXE)
	@lcov -t "./gcov" -o report.info --no-external -c -d .
	@genhtml -o report report.info
	@gcovr -r . --html-details -o ./report/coverage_report.html
	@$(REPORT_OPEN) ./report/index.html
	@$(RM) *.gcno *.gcda gcov_test *.info

# SERVICE
style:
	clang-format -style=google -n *.h *.c
	clang-format -style=google -n $(SRC_DIR)*

gost:
	clang-format -style=google -i *.h *.c
	clang-format -style=google -i $(SRC_DIR)*

clean:
	@$(RM) $(TARGET)
	@$(RM) $(OBJ_DIR)
	@$(RM) $(TEST_EXE)
	@$(RM) $(TARGET)
	@$(RM) *.dSYM
