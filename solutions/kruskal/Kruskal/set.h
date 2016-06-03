#ifndef SOLUTIONS_KRUSKAL_KRUSKAL_SET_H_
#define SOLUTIONS_KRUSKAL_KRUSKAL_SET_H_
#include <iostream>
#include <cstdlib>

class sets {
 public:
  int* arr;
  int* harr;
  int size;
  explicit sets(int s);
  void add(int a);
  void un(int a, int b);
  int search(int a);
  void clear();
  void print();
  ~sets();
};
#endif // SOLUTIONS_KRUSKAL_KRUSKAL_SET_H_
