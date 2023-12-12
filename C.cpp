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
    ll n;
    vector<ll> vec;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        vec.pb(temp);
    }

    ll q;
    cin >> q;

    for (ll i = 0; i < q; i++)
    {
        ll temp;
        cin >> temp;

        vector<ll>::iterator iter;
        iter = lower_bound(all(vec), temp);

        if (*(iter + 1) == temp || *iter == temp)
        {
            cout << "Yes " << iter - vec.begin() + 1 << endl;
        }
        else
        {
            cout << "No " << iter - vec.begin() + 1 << endl;
        }
    }
    return 0;
}