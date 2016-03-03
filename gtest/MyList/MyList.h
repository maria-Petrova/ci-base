#ifndef GTEST_MYLIST_MYLIST_H
#define GTEST_MYLIST_MYLIST_H

#include <iostream>
#include <time.h>
#include <cstdlib>

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
  void sort();
  void print();
};

#endif  // GTEST_MYLIST_MYLIST_H
