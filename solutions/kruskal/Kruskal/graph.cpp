#include "graph.h"

void ed(int a, int b, int s, Edge *r) {
  r->a = a;
  r->b = b;
  r->size = s;
}

void gr(int vn, int en, Edge *rebr, Graph *g) {
  g->enumb = en;
  g->vnumb = vn;
  g->edges = new Edge[en];
  for (int i = 0; i < en; i++)
    g->edges[i] = rebr[i];
  for (int i = 0; i < en; i++)
    for (int j = en - 1; j > i; j--)
      if (g->edges[j - 1].size < g->edges[j].size) {
        Edge tmp = g->edges[j - 1];
        g->edges[j - 1] = g->edges[j];
        g->edges[j] = tmp;
      }
}

void print(Graph *g) {
  for (int i = 0; i < g->enumb; i++) {
    std::cout << g->edges[i].a << " - " << g->edges[i].b << " ";
    std::cout << std::endl;
  }
}

void Krusk(Graph *g, Graph *ostov) {
  std::stack <Edge> st;
  sets s(g->vnumb);
  int n = g->vnumb;
  ostov->vnumb = n;
  ostov->enumb = n - 1;
  ostov->edges = new Edge[n - 1];
  for (int i = 0; i < n; i++)
    s.add(i);
  for (int i = 0; i < g->enumb; i++)
    st.push(g->edges[i]);
  int t = 0;
  while ((st.empty() != 1) && t < n - 1) {
    Edge tmp = st.top();
    st.pop();
    if (s.search(tmp.a) != s.search(tmp.b)) {
      ostov->edges[t] = tmp;
      t++;
      s.un(tmp.a, tmp.b);
    }
  }
}
