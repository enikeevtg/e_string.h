CC = gcc
CF = -Wall -Werror -Wextra -g
STD = -std=c11 -pedantic

all: clean main

main:
	$(CC) $(CF) main.c e_string.c -o e_string $(STD)

style:
	clang-format -i *.h *.c

clean:
	rm -rf *.out e_string
