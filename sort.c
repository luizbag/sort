// -*- coding: utf-8-unix; -*-
#include<stdio.h>
#include"buble.h"
#include"selection.h"
#include"merge.h"
#include"vector_util.h"

void print_vector(int* v, int l);

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
  printf("Merge sort\n");
  clone_vector(original, v, 10);
  print_vector(v, 10);
  merge_sort(v, 10);
  print_vector(v, 10);
  return 0;
}
