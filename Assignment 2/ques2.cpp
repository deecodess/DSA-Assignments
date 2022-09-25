/* Code to count the number of occurences in a linked list and then delete all the occurences*/
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

}
void InsertAtHead(Node* &Head, int d){
    Node* Temp=new Node(d);
    Temp->next=Head;
    Head=Temp;
}
int search(Node* Head, int d){
    Node* temp=Head;
    int cnt=0;
    while(temp!=NULL){
        if(temp->data==d){
            cnt++;
        }
        temp=temp->next;
    }
    return cnt;
}
void DeleteAtPosition(Node* &Head, int pos){
    if(pos==1){
        DeleteAtHead(Head);
        return;
    }
    Node* Temp=Head;
    int cnt=1;
    while(cnt<pos-1){
        Temp=Temp->next;
        cnt++;
    }
    Node* Temp1=Temp->next;
    Temp->next=Temp1->next;
    delete Temp1;
}

void DeleteAtHead(Node* &Head){
    Node* Temp=Head;
    Head=Head->next;
    delete Temp;
}
int main(){
    Node* Head=NULL;
    cout<<"Enter the number of elements in the linked list"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the linked list"<<endl;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        InsertAtHead(Head, d);
    }
    cout<<"Enter the value you want to delete"<<endl;
    int d;
    cin>>d;
    int cnt=search(Head, d);
    cout<<"The number of occurences of the number is "<<cnt<<endl;
    for(int i=0;i<cnt;i++){
        DeleteAtPosition(Head, d);
    }
    return 0;
}