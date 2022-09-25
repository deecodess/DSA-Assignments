#include <iostream>
using namespace std;

void create(int n){
    int a[10000];
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>a[i];
    }
}
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void insert(int a[],int n){
    int pos,val;
    cout<<"Enter the position where you want to insert the element: ";
    cin>>pos;
    cout<<"Enter the value of the element: ";
    cin>>val;
    for(int i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=val;
    cout<<"The array after insertion is: ";
    display(a,n+1);
}
void del(int a[],int n){
    int pos;
    cout<<"Enter the position of the element you want to delete: ";
    cin>>pos;
    for(int i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    cout<<"The array after deletion is: ";
    display(a,n-1);
}
void search(int arr[],int n,int target){
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"The element is present at position "<<i+1<<endl;
            flag=1;
        }
    }
    if(flag==0){
        cout<<"The element is not present in the array"<<endl;
    }
}


int main(){
    cout<<"MENU"<<endl;
    cout<<"1.Create"<<endl;
    cout<<"2.Display"<<endl;
    cout<<"3.Insert"<<endl;
    cout<<"4.Delete"<<endl;
    cout<<"5.Search"<<endl;
    cout<<"6.Exit"<<endl;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[1000];
    int ch;
    do{
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch){
            case 1: create(n);
                    break;
            case 2: display(a,n);
                    break;
            case 3: insert(a,n);
                    break;
            case 4: del(a,n);
                    break;
            case 5: int target;
                    cout<<"Enter the element you want to search: ";
                    cin>>target;
                    search(a,n,target);
                    break;
            case 6: cout<<"Thank you for using the program"<<endl;
                    break;
            default: cout<<"Invalid choice"<<endl;
        }
}
    while(ch!=6);
    return 0;
}