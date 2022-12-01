#ifndef INCLUDED_HEAPSORT
#define INCLUDED_HEAPSORT

#include <vector>

void heapify(std::vector<int> &v, int i, int n);
void build_heap(std::vector<int> &v);
void heapsort(std::vector<int> &v);
void print(const std::vector<int> &v);

#endif /* INCLUDED_HEAPSORT */
