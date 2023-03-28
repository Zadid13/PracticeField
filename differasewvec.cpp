#include<bits/stdc++.h>
using namespace std;
int main()

{

    vector<int>v= {2,3,4,5};//5 4 3 2


    reverse(v.begin(),v.end());
    while(!v.empty())
    {
        cout<<v.back()<<endl; //O(n)
        v.pop_back();

    }



}
