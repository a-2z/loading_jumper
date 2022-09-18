CC=g++
CFLAGS=-I

runner: runner.o
	$(CC) -o runner runner.o