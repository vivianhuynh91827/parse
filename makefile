all: parse.c
	gcc -o program parse.c

parse.o:
	gcc -c parse.c
run: 
	./program

clean:
	rm -rf program
	rm -rf ~.o
	rm -rf *.~
