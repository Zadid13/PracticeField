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

    string s = "shahrir";

    if (s.find("ria") != -1)
        cout << "Sub string found" << endl;
    else
        cout << "Not found" << endl;
    return 0;
}