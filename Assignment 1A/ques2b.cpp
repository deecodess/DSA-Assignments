#include <iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter the number of rows"<<endl;
    cin>>r;
    cout<<"Enter the number of columns"<<endl;
    cin>>c;
    int a[1000][1000],b[1000][1000],add[1000][1000];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
            cout<<endl;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
            cout<<endl;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            add[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<add[i][j]<<" ";
            cout<<endl;
        }
    }
}