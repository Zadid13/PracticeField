#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    vector<string> v;
    v.push_back("shahriar");
    v.push_back("shahriar");
    v.push_back("momo");
    v.push_back("momo");
    v.push_back("sharif");
    v.push_back("sharif");

    sort(v.begin(), v.end());

    int Sz = unique(v.begin(), v.end()) - v.begin();

    cout << Sz << endl;
    for (int i = 0; i < Sz; i++)
        cout << v[i] << endl;

    return 0;
}