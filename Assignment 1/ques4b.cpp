#include <iostream>
using namespace std;

int main(){
    int r,c,a[1000][1000],b[1000][1000],mul[1000][1000];
    cout<<"Enter number of rows"<<endl;
    cin>>r;
    cout<<"Enter number of columns"<<endl;
    cin>>c;
    cout<<"Enter the elements of the first matrix"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of the second matrix"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }
    cout<<"Multiplicated Matrix is: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            mul[i][j]=0;
            for(int k=0;k<c;k++){
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }



}