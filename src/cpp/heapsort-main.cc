#include <algorithm>

#include "heapsort.h"


int main(int argc, char *argv[])
{
  std::vector<int> v;
  for (int i=0; i<10; ++i)
  {
    int x = rand() % 100;
    v.push_back(x);
  }

  print(v);
  heapsort(v);
  print(v);
}
