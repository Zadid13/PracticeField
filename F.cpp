#include <bits/stdc++.h>
using namespace std;
#define fast_io() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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

#define ull unsigned long long

int main() {
    fast_io();
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        deque<int> dq;

        for (ll i = 0; i < n; i++) {
            if (dq.empty()) {
                dq.push_back(i);
            }

            if (dq.front() <= (i - k)) {
                dq.pop_front();
            }

            while (!dq.empty() && arr[i] >= arr[dq.back()]) {
                dq.pop_back();
            }

            dq.push_back(i);

            if (i >= (k - 1)) {
                cout << arr[dq.front()] << " ";
            }
        }

        cout << endl;
    }
    return 0;
}
