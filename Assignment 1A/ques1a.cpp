#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000][1000];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cin>>a[i][j];
            }
        }       
    }
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
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