// -*- coding: utf-8-unix; -*-
#include"selection.h"

void selection_sort(int* v, int l) {
  for(int i=0;i<l-1;i++) {
    int menor=i;
    for(int j=i+1;j<l;j++) {
      if(v[menor]>v[j])
	menor = j;
    }
    int aux = v[i];
    v[i] = v[menor];
    v[menor]=aux;
  }
}
