#include <iostream>
#include <stack>

using namespace std;

int main(){
    int arr[12] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index=0;
    int max = -1;

    for(int i = 0;i<size;i++)if(arr[i]>max){
        max=arr[i];
        index=i;
    }
    
    int sum=0;
    max = arr[0];
    for(int i = 0;i<=index;i++){
        if(arr[i]>max)max=arr[i];
        if(arr[i]<max)sum+=max-arr[i];
    }
    max=arr[size-1];
    for(int i = size-1;i>=index;i--){
        if(arr[i]>max)max=arr[i];
        if(arr[i]<max)sum+=max-arr[i];
    }
    cout<<sum<<"\n";
    system("PAUSE");
    return 0;
}