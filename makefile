
ifeq ($(DEBUG),true)
	CC = gcc -g
else
	CC = gcc
endif

parse.o: parse.c
	$(CC) -o program parse.c

run:
	./program

clean:
	rm program
	rm *.o
