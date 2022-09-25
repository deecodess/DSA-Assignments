#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void InsertAtPosition( Node* &Tail, Node* &Head, int d, int pos){
    if(pos==1){
        InsertAtHead(Head, d);
        return;
    }
    Node* Temp=Head;
    int cnt=1;
    while(cnt<pos-1){
        Temp=Temp->next;
        cnt++;
    }
    Node* Temp1=new Node(d);
    Temp1->next=Temp->next;
    Temp->next=Temp1;
}
void InsertAtHead(Node* &Head, int d){
    Node* Temp=new Node(d);
    Temp->next=Head;
    Head=Temp;
}
void PrintMiddle(Node* &Head,int n){
    Node* Temp=Head;
    int cnt=1;
    while(cnt<n/2){
        Temp=Temp->next;
        cnt++;
    }
    cout<<Temp->data<<endl;
}

int main(){
    Node* Head=NULL;
    cout<<"Enter the number of elements you want to insert in the linked list: ";
    int n;
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        InsertAtHead(Head, d);
    }
    PrintMiddle(Head,n);
    return 0;
}