#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000][1000];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                a[i][j]==0;
            }
            else if(a[i][j]!=0){
                cin>>a[i][j];
                a[j][i]=a[i][j];
            }
            else{
                a[i][j]=0;
            }
        }       
    }
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
           
        }    
            cout<<endl;
           
    }
    return 0;
}