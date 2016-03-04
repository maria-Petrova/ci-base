#include "heap.h"
#include <gtest.h>

TEST(heap, Can_swap) {
  dheap H(3, 2);
  H.arr[0] = 2;
  H.arr[1] = 7;
  H.arr[2] = 5;
  dheap H1(3, 2);
  H1.arr[0] = 7;
  H1.arr[1] = 2;
  H1.arr[2] = 5;
  H.swap(0, 1);
  for (int i = 0; i < 3; i++)
    EXPECT_EQ(H.arr[i], H1.arr[i]);
}

TEST(heap, minchild_test) {
  dheap h(5, 2);
  h.arr[1] = 0;
  h.arr[2] = 3;
  EXPECT_EQ(h.minchild(0), 1);
}

TEST(heap, cant_down_with_wrong_idx) {
  dheap h(5, 2);
  ASSERT_ANY_THROW(h.vspl(-1));
}

TEST(heap, sorts_d_3) {
  dheap h(5, 3);
  h.arr[0] = 4;
  h.arr[1] = 17;
  h.arr[2] = 0;
  h.arr[3] = 12;
  h.arr[4] = 1;
  h.sort();
  h.print();
  int h1[5] = {17, 12, 4, 1, 0};
  for (int i = 0; i < 5; i++)
    EXPECT_EQ(h.arr[i], h1[i]);
}
