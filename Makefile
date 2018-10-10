sort: sorting.o
	cc -o sort sort.c sorting.o

sorting.o: sorting.h

clean:
	rm sort *.o
