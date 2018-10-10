#include<stdio.h>

void print_vector(int* v, int l);
void buble_sort(int* v, int l);

int main(int argc, char* argv) {
  int v[10] = {1,5,8,6,2,3,0,9,4,7};
  print_vector(v, 10);
  buble_sort(v, 10);
  print_vector(v, 10);
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

void buble_sort(int* v, int l) {
  int change = 1;
  while(change) {
    change=0;
    for(int i=0;i<l-1;i++) {
      if(v[i]>v[i+1]) {
	int aux = v[i];
	v[i] = v[i+1];
	v[i+1] = aux;
	change=1;
      }
    }
  }
}
