#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void InsertatHead(Node* &head, int d){
    Node* temp=new Node(d);
    if(head!=NULL){
        head->prev=temp;
    temp->next=head;
    head=temp;
    }
    else{
        head=temp;
    }
    
}
void InsertatTail(Node* &head,int d){
    Node* temp=new Node(d);
    Node* temp1=head;
    if(head == NULL)
    {
        head = temp;
        return;
    }
    else{
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
        temp->prev=temp1;
    }
}

void InsertatPosition(Node* &head, int d, int val){
    Node* temp=new Node(d);
    Node* temp1=head;
    if(head==NULL){
        head=temp;
        return;
    }
    else{
        while(temp1 && temp1->data!=val){
            temp1=temp1->next;
        }
        temp->next=temp1->next;
        temp->prev=temp1;
        temp1->next=temp;
        temp1->next->prev=temp;
    }
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* HeadAtTail(Node* head){
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;
    temp->next->next=NULL;
    head=temp->next;
    return head;
}

int main(){
    Node* head=NULL;
    cout<<"Enter the size of linkedlist: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of linkedlist: "<<endl;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        InsertatHead(head,d);
    }
    cout<<"The linkedlist is: "<<endl;
    print(head);
    cout<<"The linkedlist after adding head at tail is: "<<endl;
    print(HeadAtTail(head));
}