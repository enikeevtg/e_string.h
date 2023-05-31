CC = gcc
CF = -Wall -Werror -Wextra
STD = -std=c11 -pedantic
ASAN = #-g -fsanitize=address
AR = ar
NAME = e_string

#OS := $(shell uname)
#	ifeq ($(OS), Darwin)
#		OSF = -D MACOS
#	endif
#	ifeq ($(OS), Linux)
#		OSF = -D LINUX
#	endif

all: clean build

build: e_string.a
	$(CC) $(CF) main.c -L. -l_$(NAME) -o $(NAME) $(STD) $(ASAN)

test:

e_string.a: e_string.o
	$(AR) rv lib_$@ $^
	rm $^

e_string.o:
	$(CC) $(CF) e_string.c -c $(STD) $(ASAN)

gcov_report:

style:
	clang-format -i *.h *.c

clean:
	rm -rf e_string *.o *.a *.out
