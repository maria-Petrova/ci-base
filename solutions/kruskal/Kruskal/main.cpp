#include "set.h"
#include "graph.h"

void main() {
  Edge a;
  ed(0, 1, 1, &a);
  Edge b;
  ed(1, 2, 4, &b);
  Edge c;
  ed(2, 3, 5, &c);
  Edge d;
  ed(3, 4, 10, &d);
  Edge e;
  ed(1, 3, 1, &e);
  Edge f;
  ed(1, 4, 12, &f);
  Edge g;
  ed(0, 4, 2, &g);
  Edge h;
  ed(1, 3, 2, &h);
  Edge r[8] = {a, b, c, d, e, f, g, h};
  Graph grh;
  gr(5, 8, r, &grh);
  Graph grh1;
  Krusk(&grh, &grh1);
  print(&grh1);
  system("pause");
}