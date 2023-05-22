CC = gcc
CF = -Wall -Werror -Wextra -g
STD = -std=c11 -pedantic

OS := $(shell uname)
	ifeq ($(OS), Darwin)
		OSF = -D MACOS
	else
		OSF = -D LINUX
	endif


all: clean main

main:
	$(CC) $(CF) main.c e_string.c -o e_string $(STD) $(OSF)

style:
	clang-format -i *.h *.c

clean:
	rm -rf *.out e_string
