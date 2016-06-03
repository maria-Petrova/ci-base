#ifndef SOLUTIONS_KRUSKAL_KRUSKAL_GRAPH_H_
#define SOLUTIONS_KRUSKAL_KRUSKAL_GRAPH_H_
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

void ed(int a, int b, int s, Edge *r);
void gr(int vn, int en, Edge *rebr, Graph *g);
void print(Graph*);
void Krusk(Graph*, Graph*);
#endif // SOLUTIONS_KRUSKAL_KRUSKAL_GRAPH_H_
