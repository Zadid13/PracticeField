#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){

    optimize();

    string s = "deacbAAA";

    cout<<*max_element(s.begin(),s.end())<<endl;
    cout<<*min_element(s.begin(),s.end())<<endl;

}
