#include<stdio.h>

void copy_vector(int* s, int start, int end, int* d) {
  for(int i=start; i<end; i++) {
    d[i] = s[i];
  }
}

void clone_vector(int* s, int* d, int l) {
  copy_vector(s, 0, l, d);
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
