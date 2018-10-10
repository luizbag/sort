#include"sorting.h"

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
