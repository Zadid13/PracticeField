#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{

    optimize();

    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++)
    {

        string s;
        char c;
        cin>>c;
        getline(cin,s);
        s=c+s;
        cout<<"Case "<<tc<<" "<<s<<endl;

    }

}
