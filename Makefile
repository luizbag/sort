sort: sorting.o
	cc sort.c -o bin/sort

sorting.o: libs/sorting.c libs/sorting.h
	cc -c libs/sorting.c
clean:
	rm -rf bin
	mkdir bin
