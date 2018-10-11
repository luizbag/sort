// -*- coding: utf-8-unix; -*-
#include<stdio.h>
#include"buble.h"
#include"selection.h"

void print_vector(int* v, int l);
void clone_vector(int* v, int* d, int l);

int main(int argc, char* argv) {
  int original[10] = {0,9,8,7,6,1,2,3,4,5};
  int v[10];
  printf("Buble sort\n");
  clone_vector(original, v, 10);
  print_vector(v, 10);
  buble_sort(v, 10);
  print_vector(v, 10);
  printf("Selection sort\n");
  clone_vector(original, v, 10);
  print_vector(v, 10);
  selection_sort(v, 10);
  print_vector(v, 10);
  return 0;
}

void clone_vector(int* s, int* d, int l) {
  for(int i=0;i<l;i++) {
    d[i] = s[i];
  }
}

void print_vector(int* v, int l) {
  printf("[");
  for(int i=0;i<l;i++) {
    printf("%i", v[i]);
    if(i<l-1)
      printf(", ");
    else
      printf("]\n");
  }
}
