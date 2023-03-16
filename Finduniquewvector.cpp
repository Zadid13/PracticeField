#include <bits/stdc++.h>
using namespace std;
int main() {

  vector<int> v = {2, 3, 5, 5, 7, 7, 1};
  sort(v.begin(), v.end());                          // o(nlog2(n))
  int size = unique(v.begin(), v.end()) - v.begin(); // o(n)

  cout << size << endl;
  for (int i = 0; i < size; i++)
    cout << v[i] << " ";

  cout << endl;

  return 0;
}