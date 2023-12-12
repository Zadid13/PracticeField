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
    // Set up fast I/O for efficient input and output
    fast_io();

    // Read the size of the vector
    ll t;
    cin >> t;

    // Create a vector of size t and read its elements
    vector<ll> vec(t);
    for (auto &i : vec)
        cin >> i;

    // Read position 'pos' and erase the element at that position
    ll pos;
    cin >> pos;
    vec.erase(vec.begin() + pos - 1);

    // Read range [start, end) and erase elements in that range
    ll start, end;
    cin >> start >> end;
    vec.erase(vec.begin() + start - 1, vec.begin() + end - 1);

    // Print the size of the modified vector
    cout << vec.size() << endl;

    // Print the elements of the modified vector
    for (ll i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}
