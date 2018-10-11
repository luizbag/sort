# -*- coding: utf-8-unix; -*-
objects = buble.o selection.o

sort: $(objects)
	cc -o sort sort.c $(objects)

buble.o: buble.h

selection.o: selection.h

clean:
	rm sort *.o
