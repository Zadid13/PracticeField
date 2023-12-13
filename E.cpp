#include <bits/stdc++.h>
using namespace std;

#define fast_io()                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define endl '\n'
#define pb push_back
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define all(vec) vec.begin(), vec.end()
#define ins insert
#define ld long double
#define ll long long

int main()
{
    fast_io();
    ll q, type;
    cin >> q;
    string name;
    ll marks;

    map<string, ll> m;

    for (ll i = 0; i < q; i++)
    {
        cin >> type;

        if (type == 1)
        {
            cin >> name >> marks;
            if (m.find(name) == m.end())
                m.insert(make_pair(name, marks));
            else
            {
                m[name] += marks;
            }
        }
        else if (type == 2)
        {
            cin >> name;
            m.erase(name);
        }
        else if (type == 3)
        {
            cin >> name;
            if (m.find(name) != m.end())
            {
                cout << m.find(name)->second << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
    }

    return 0;
}
