CC = gcc
CF = -Wall -Werror -Wextra -g
STD = -std=c11 -pedantic

#OS := $(shell uname)
#	ifeq ($(OS), Darwin)
#		OSF = -D MACOS
#	endif
#	ifeq ($(OS), Linux)
#		OSF = -D LINUX
#	endif

all: clean main

main:
	$(CC) $(CF) main.c -c $(STD)
	$(CC) $(CF) e_string.c -c $(STD)
	$(CC) $(CF) main.o e_string.o -o e_string $(STD)

style:
	clang-format -i *.h *.c

clean:
	rm -rf *.out e_string *.o
