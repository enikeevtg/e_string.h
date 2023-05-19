CC = gcc
CF = -Wall -Werror -Wextra

all: clean main

main:
	$(CC) $(CF) main.c e_string.c -o prog

exec:
	./prog

style:
	clang-format -i *.h *.c

clean:
	rm -rf prog
