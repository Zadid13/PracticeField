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

    string s = "asd";
    string f = "ertyu";

    for (int i = 1; i <= 3; i++)
        s += f[i];

    cout << s << endl;
}
