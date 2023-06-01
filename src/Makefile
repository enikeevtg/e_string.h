# all, clean, test, e_string.a, gcov_report

CC = gcc
AR = ar rv
RAN = ranlib
RM = rm -rf

CF = -Wall -Werror -Wextra
STD = -std=c11 -pedantic
ASAN = -g -fsanitize=address

LIB = e_string.a
EXE = libtest

#OS := $(shell uname)
#	ifeq ($(OS), Darwin)
#		OSF = -D MACOS
#	endif
#	ifeq ($(OS), Linux)
#		OSF = -D LINUX
#	endif

all: clean test

test: $(LIB)
	$(CC) $(CF) $(STD) $(ASAN) main.c -L. $(TARGET) -o $(EXE)

$(LIB): e_string.o
	$(AR) $@ $^
	$(RAN) $@
	$(RM) $^

e_string.o:
	$(CC) $(CF) e_string.c -c $(STD) $(ASAN)

gcov_report:

style:
	clang-format -i *.h *.c

clean:
	$(RM) $(EXE)
	$(RM) $(LIB)
	$(RM) *.o
