#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{

    optimize();

    string s = "deacbAAA";

    sort(s.begin(),s.end());

    int Sz = unique(s.begin(),s.end())-s.begin();

    for(int i=0; i<Sz; i++) cout<<s[i];

    cout<<endl;

}
