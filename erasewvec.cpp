#include<bits/stdc++.h>
using namespace std;
int main()

{

    vector<int>v= {2,3,4,5};


    cout<<*v.begin()<<endl;//O(1)

    v.erase(v.begin());//O(n)
    v.pop_back();//O(n)

    cout<<v.size()<<endl;
    for(auto u:v)cout<<u<<" ";
    cout<<endl;



}
