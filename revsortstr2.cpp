#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{

    optimize();

    vector<string> v;

    v.push_back("Shahriar");
    v.push_back("Mubarrat");
    v.push_back("emon");
    v.push_back("Nishan");
    v.push_back("momo");
    v.push_back("Prity");
    v.push_back("Momo");

    sort(v.rbegin(),v.rend());

    for(auto u:v) cout<<u<<endl;



}
