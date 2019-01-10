// -*- coding: utf-8-unix; -*-
// Selection sort
void selection_sort(int* v, int l);

// Buble sort
void buble_sort(int* v, int l);

// Merge sort
void merge_sort(int* a, int end);
void merge(int* left, int* right, int end, int* a);

// Selection sort
void selection_sort(int* v, int l);

// Utils
void copy_vector(int* s, int start, int end, int* d);
void clone_vector(int*s, int* d, int l);
void print_vector(int* v, int l);