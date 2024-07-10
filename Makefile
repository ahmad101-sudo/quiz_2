CC = gcc
code: code.c
	CC $< -o $@

.PHONY = clean
clean:
	rm code.o code
