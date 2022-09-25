#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000],b[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        b[i]=i+1;
    }
    for(int i=0;i<n;i++){
        if(b[i]!=a[i]){
            cout<<b[i]<<" is missing"<<endl;
            break;
        }
    }
}