#include<vector>
#include<iostream>
#include "heapsort.h"


using namespace std;

void swap(vector<int> &v, int i, int j)
{
  int tmp = v[i];
  v[i] = v[j];
  v[j] = tmp;
}

void heapify(vector<int> &v, int i, int n)
{
  while (2*i + 1 < n)
  {
    int left = 2*i + 1;
    if ((left + 1 < n) && (v[left] < v[left+1]))
    {
      left = left + 1;
    }

    if (v[i] > v[left]) return;
    
    swap(v, i, left);
    i = left;
  }
}


void build_heap(vector<int> &v)
{
  int i = v.size()/2 - 1;
  while (i >= 0)
  {
    heapify(v, i, v.size());
    i = i - 1;
  }
}


void heapsort(vector<int> &v)
{
  build_heap(v);

  int n = v.size() - 1;
  while (n > 0)
  {
    swap(v, 0, n);
    n = n - 1;
    heapify(v, 0, n);
  }
}

void print(const vector<int> &v)
{
  for (int i=0; i<v.size(); ++i)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}
