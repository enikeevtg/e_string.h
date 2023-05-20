CC = gcc
CF = -Wall -Werror -Wextra -g

all: clean main

main:
	$(CC) $(CF) main.c e_string.c -o e_string

style:
	clang-format -i *.h *.c

clean:
	rm -rf *.out e_string
