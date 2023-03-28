
#include<bits/stdc++.h>
using namespace std;
int main()

{

    int a[]={2,3,5};

    sort(a, a+3, greater<int>() );

    for(int i=0;i<3;i++)cout<<a[i]<<" ";

    cout<<endl;


}
