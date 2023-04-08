#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "aabaa";
    string tmp= s1;

    reverse(tmp.begin(),tmp.end());

    if(s1==tmp)cout<<"Palindrom\n";
    else cout<<"Not Palindrom\n";

}
