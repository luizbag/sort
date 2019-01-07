// -*- coding: utf-8-unix; -*-
#include<stdio.h>
#include"merge.h"
#include"vector_util.h"

void merge_sort(int* a, int l) {
  split(a, l);
}

void split(int* a, int end) {
  int start = 0;
  if((end - start) >= 2) {
    int mid = (end - start) / 2;
    int left[mid - start];
    int right[end - mid];
    copy_vector(a, start, mid, left);
    copy_vector(a, mid, end, right);
    split(left, mid);
    split(right, end-mid);
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