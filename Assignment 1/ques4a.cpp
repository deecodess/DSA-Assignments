#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[10000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp[1000];
    for(int i=0;i<n;i++){
        temp[i]=a[n-i-1];
    }
    for(int i=0;i<n;i++){
        a[i]=temp[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}