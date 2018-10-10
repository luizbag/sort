#include<stdio.h>
#include"sorting.h"

void print_vector(int* v, int l);

int main(int argc, char* argv) {
  int v[10] = {0,9,8,7,6,1,2,3,4,5};
  print_vector(v, 10);
  buble_sort(v, 10);
  print_vector(v, 10);
  return 0;
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
