#include <iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter the number of rows"<<endl;
    cin>>r;
    cout<<"Enter the number of columns"<<endl;
    cin>>c;
    int a[1000][1000],trans[1000][1000];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
            cout<<endl;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            trans[j][i]=a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<trans[i][j]<<endl;
            
        }
    }
}