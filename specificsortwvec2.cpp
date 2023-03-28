
#include<bits/stdc++.h>
using namespace std;
int main()

{

    vector<int>v= {5,3,4,7,9,3,1,2};


    sort(v.begin()+1,v.begin()+6);//O(nlog2(n));

    for(auto u:v)cout<<u<<" ";

    cout<<endl;


}
