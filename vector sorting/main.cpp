#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

template<typename T>


T sortVector(T v)
{
    sort(v.rbegin(),v.rend());
    for(auto i : v)
    {
        cout<< i << " ";

    }
}



int main()
{
      vector<int> v {1,9,3,2,4,8,18,6,28};
    sortVector(v);

    return 0;
}
