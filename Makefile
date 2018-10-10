objects = buble.o

sort: $(objects)
	cc -o sort sort.c $(objects)

buble.o: buble.h

clean:
	rm sort *.o
