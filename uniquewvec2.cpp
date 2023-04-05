#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {63, 78, 22, 89, 88, 74, 11};
    sort(v.begin(), v.end());
    unique(v.begin(), v.end());

    for (auto u : v)
        cout << u << " ";
    cout << endl;

    return 0;
}
