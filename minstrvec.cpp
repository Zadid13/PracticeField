#include<bits/stdc++.h>
using namespace std;
int main(){

vector<string> v ={"moni","mahi","moni", "shah","imtiaz","hasan","mahin"};
vector<string>::iterator it= min_element(v.begin(),v.end());
cout<<*it<<endl;

return 0;

}
