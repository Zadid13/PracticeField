#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v = {2, 3, 5, 5, 7, 7};
    vector<int>::iterator it = min_element(v.begin(), v.end());
    cout << *it << endl;
    return 0;
}
