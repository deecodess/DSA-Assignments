#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000][1000];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i-j==-1||i-j==0||i-j==1){
                cin>>a[i][j];
            }
        }       
    }
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i-j==-1||i-j==0||i-j==1){
                cout<<a[i][j];
            }
            else{
                cout<<"0";
            }
            cout<<endl;
        }   
    }
    return 0;
}