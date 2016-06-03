#include <iostream>
#include <stack>
#include "Set.h"

struct Edge {
  int a;
  int b;
  int size;
};

struct Graph {
  int vnumb;
  int enumb;
  Edge* edges;
};

void ed(int, int, int, Edge*);
void gr(int, int, Edge*, Graph*);
void print(Graph*);
void Krusk(Graph*, Graph*);
