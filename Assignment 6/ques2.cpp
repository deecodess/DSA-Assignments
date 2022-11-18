//Insertion Sort
#include <iostream>
using namespace std;
void insertionSort(int a[], int n){
    for(int i=1;i<n;i++){
        int e=a[i];
        int j=i-1;
        while(j>=0 && a[j]>e){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=e;
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[1000];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertionSort(a,n);
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}