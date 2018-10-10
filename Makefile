sort: sorting.o
	cc sort.c -o bin/sort

sorting.o: sorting.h

clean:
	rm -rf bin
	mkdir bin
	rm *.o
