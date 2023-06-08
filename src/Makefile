.PHONY: all clean test e_string.a gcov_report

# utilities
CC = gcc
AR = ar rs
RAN = ranlib
RM = rm -rf
MK = mkdir -p

# utilities options
CF = -Wall -Werror -Wextra
STD = -std=c11 -pedantic
ASAN = -g -fsanitize=address

# filenames
SRCDIR = ./e_string_src/
OBJDIR = ./e_string_obj/
SRC = $(wildcard $(SRCDIR)*.c)
OBJ = $(patsubst $(SRCDIR)%.c, $(OBJDIR)%.o, $(SRC))
TARGET = e_string.a

TEST_OBJDIR = ./test_e_string_obj/
TEST_OBJ = $(patsubst $(SRCDIR)%.c, $(TEST_OBJDIR)%.o, $(SRC))
TEST = libtest



all: clean test e_string.a gcov_report

# LIBRARY BUILDING
$(TARGET): lclean objects 
	@$(AR) $@ $(OBJ)
	@$(RAN) $@
	@echo "$(AR): creating library e_string.a \033[0;32msuccess\033[0m"

objects: objdir $(OBJ) obj_success

objdir:
	@mkdir -p $(OBJDIR)

$(OBJDIR)%.o: $(SRCDIR)%.c
	@$(CC) $(CF) -c $^ -o $@

obj_success:
	@echo "$(CC): objects compilation \033[0;32msuccsess\033[0m"
# END OF LIBRARY BUILDING

# UNIT-TESTS
test: lclean $(TARGET)
	$(CC) $(CF) $(STD) $(ASAN) main.c -L. $(TARGET) -o $(TEST)

$(TARGET): test_objects 
	@$(AR) $@ $(TEST_OBJ)
	@$(RAN) $@
	@echo "$(AR): creating test library e_string.a \033[0;32msuccess\033[0m"

test_objects: test_objdir $(TEST_OBJ) test_obj_success

$(TEST_OBJDIR)%.o: $(SRCDIR)%.c
	@$(CC) $(CF) $(STD) $(ASAN) -c $^ -o $@

test_objdir:
	@mkdir -p $(TEST_OBJDIR)

test_obj_success:
	@echo "$(CC): test objects compilation \033[0;32msuccsess\033[0m"
# END OF UNIT-TESTS


# TESTS COVERING REPORT
gcov_report:


# SERVICE
style:
	clang-format -style=google -n *.h *.c
	clang-format -style=google -n $(SRCDIR)*.h $(SRCDIR)*.c

tostyle:
	clang-format -style=google -i *.h *.c
	clang-format -style=google -i $(SRCDIR)*.h $(SRCDIR)*.c

lclean:
	@$(RM) $(TARGET)
	@echo "clean: $(TARGET) \033[0;31mdeleted\033[0m"

fclean:
	@$(RM) $(OBJDIR)
	@echo "full clean: $(OBJDIR) \033[0;31mdeleted\033[0m"
	@$(RM) $(TEST)
	@echo "full clean: $(TEST) \033[0;31mdeleted\033[0m"
	@$(RM) $(TARGET)
	@echo "full clean: $(TARGET) \033[0;31mdeleted\033[0m"
