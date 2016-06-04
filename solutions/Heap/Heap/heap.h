#ifndef SOLUTIONS_HEAP_HEAP_HEAP_H_
#define SOLUTIONS_HEAP_HEAP_HEAP_H_
#include <iostream>

class dheap {
 public:
  int* arr;
  int d;
  int size;
  dheap(int s, int dd);
  ~dheap();
  void swap(int i, int j);
  void vspl(int i);
  int min(int i, int j);
  int minchild(int i);
  void pogr(int i);
  void okuch();
  int delmin();
  void insert(int key);
  void sort();
  void print();
};

#endif  //  SOLUTIONS_HEAP_HEAP_HEAP_H_
