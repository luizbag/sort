#include<stdio.h>

void print_vector(int* v, int l);

int main(int argc, char* argv) {
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
