// -*- coding: utf-8-unix; -*-
#include<stdio.h>
#include"sorting.h"

// Selection sort
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

// Buble Sort
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

// Merge sort
void merge_sort(int* a, int end) {
  int start = 0;
  if((end - start) >= 2) {
    int mid = (end - start) / 2;
    int left[mid - start];
    int right[end - mid];
    copy_vector(a, start, mid, left);
    copy_vector(a, mid, end, right);
    merge_sort(left, mid);
    merge_sort(right, end - mid);
    merge(left, right, end, a);
  }
}

void merge(int* left, int* right, int end, int* a) {
  int start=0, mid = (end - start) / 2;
  int i=0, j=0;
  for(int k = 0; k < end; k++) {
    if(i < mid && (j >= end - mid || left[i] <= right[j])) {
      a[k] = left[i];
      i++;
    } else {
      a[k] = right[j];
      j++;
    }
  }
}

// Insertion sort
void insert_sort(int* a, int end) {
  
}

// Utils
void copy_vector(int* s, int start, int end, int* d) {
  for(int i=start, j=0; i<end; i++, j++) {
    d[j] = s[i];
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
