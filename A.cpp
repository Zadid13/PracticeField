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
    ll t;
    cin >> t;
    vector<ll> vec(t);
    for (ll i = 0; i < t; i++)
    {
        cin >> vec[i];
    }
    sort(all(vec));
    for (ll i = 0; i < t; i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}