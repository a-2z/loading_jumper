CC=g++
CFLAGS=-I

running_man: running_man.o
	$(CC) -o running_man.o

runner: runner.o running_man.o
	$(CC) -o runner runner.o running_man.o
