all: work09.o
	gcc -o work09m work09.o

work09.o: work09.c
	gcc -c work09.c

run:
	./work09m

clean:
	rm *.o
	rm program
