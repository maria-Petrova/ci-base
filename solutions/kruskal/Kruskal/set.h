#pragma once
#include <iostream>
#include <cstdlib>

class sets {
 public:
  int* arr;
  int* harr;
  int size;
  sets(int s);
  void add(int a);
  void un(int a, int b);
  int search(int a);
  void clear();
  void print();
  ~sets();
};
