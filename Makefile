# -*- coding: utf-8-unix; -*-
objects = sorting.o

build: $(objects)
	cc -o sort sort.c $(objects)

debug: $(objects)
	cc -o sort -g sort.c $(objects)

sorting.o: sorting.h

clean:
	rm sort *.o
