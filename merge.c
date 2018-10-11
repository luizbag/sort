// -*- coding: utf-8-unix; -*-
#include<stdio.h>
#include"merge.h"
#include"vector_util.h"

void merge_sort(int* a, int l) {
  int b[l];
  clone_vector(a, b, l);
  printf("merge sort\n");
  print_vector(a, l);
  print_vector(b, l);
  split(b, 0, l, a);
}

void split(int* b, int start, int end, int* a) {
  printf("split\n");
  printf("start: %i, end: %i\n", start, end);
  if(end - start < 2)
    return;
  int middle = (end - start) / 2;
  split(a, start, middle, b);
  split(a, middle, end, b);
  merge(b, start, middle, end, a);
}

void merge(int* a, int start, int middle, int end, int* b) {
  printf("merge\n");
  printf("start: %i, middle: %i, end: %i\n", start, middle, end);
  int i=start, j=middle;
  for(int k = start; k < end; k++) {
    if(i < middle && (j >= end || a[i] <= a[j])) {
      b[k] = a[i];
      i++;
    } else {
      b[k] = a[j];
      j++;
    }
  }
}
