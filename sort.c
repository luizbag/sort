// -*- coding: utf-8-unix; -*-
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"sorting.h"

#define SIZE 10

//void print_vector(int *v, int l);
void shuffle(int *array, int n);

int main(int argc, char* argv) {
  int original[SIZE];
  int v[SIZE];
  int i;
  for(i=0;i<SIZE;i++) {
    original[i] = i;
  }
  shuffle(original, SIZE);
  printf("Buble sort\n");
  clone_vector(original, v, SIZE);
  print_vector(v, SIZE);
  buble_sort(v, SIZE);
  print_vector(v, SIZE);
  printf("Selection sort\n");
  clone_vector(original, v, SIZE);
  print_vector(v, SIZE);
  selection_sort(v, SIZE);
  print_vector(v, SIZE);
  printf("Merge sort\n");
  clone_vector(original, v, SIZE);
  print_vector(v, SIZE);
  merge_sort(v, SIZE);
  print_vector(v, SIZE);
  return 0;
}

void shuffle(int *array, int n) {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  int usec = tv.tv_usec;
  srand48(usec);
  if(n>1) {
    int i;
    for(i = n - 1; i > 0; i--) {
      int j = drand48()*(i+1);
      int t = array[j];
      array[j] = array[i];
      array[i] = t;
    }
  }
}
