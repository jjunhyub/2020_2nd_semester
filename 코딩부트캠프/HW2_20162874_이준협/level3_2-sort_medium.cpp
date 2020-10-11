#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int num1[]={2};
    int num2[]={1,3};
    vector<int>v;
    int size1 = sizeof(num1)/sizeof(num1[0]);
    int size2 = sizeof(num2)/sizeof(num2[0]);
    for(int i = 0;i<size1;i++)v.push_back(num1[i]);
    for(int i = 0;i<size2;i++)v.push_back(num2[i]);
    sort(v.begin(),v.end());
    int vSize = v.size();
    int mid = vSize/2;
    if(vSize&1)cout<<v[mid]<<"\n";
    else cout<<static_cast<double>(v[mid-1]+v[mid])/2<<"\n";
    system("PAUSE");
    return 0;
}