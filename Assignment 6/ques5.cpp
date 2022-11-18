//Counting Sort
#include <iostream>
using namespace std;
void countingSort(int a[], int n){
    int largest=-1;
    for(int i=0;i<n;i++){
        largest=max(largest,a[i]);
    }
    int freq[1000]={0};
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    int j=0;
    for(int i=0;i<=largest;i++){
        while(freq[i]>0){
            a[j]=i;
            freq[i]--;
            j++;
        }
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
    countingSort(a,n);
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}