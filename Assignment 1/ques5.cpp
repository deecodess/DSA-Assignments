#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            cout<<"Element found at index "<<mid<<endl;
            return 0;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}