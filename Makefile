# -*- coding: utf-8-unix; -*-
objects = buble.o selection.o merge.o vector_util.o

sort: $(objects)
	cc -o sort sort.c $(objects)

debug: $(objects)
	cc -o sort -g sort.c $(objects)

buble.o: buble.h

selection.o: selection.h

merge.o: merge.h

vector_util.o: vector_util.h

clean:
	rm sort *.o
