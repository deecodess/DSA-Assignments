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
void InsertAtHead(Node* &Head, int d){
    Node* Temp=new Node(d);
    Temp->next=Head;
    Head=Temp;
}
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
Node *midPoint(Node *head)
{
    // Write your code here
    if(head==NULL){
        return NULL;
    }
    Node *slow=head;
    Node *fast=head->next;
     if(slow->next==NULL){
        return slow;
    }
    while(fast!=NULL&&fast->next!=NULL){
		fast=fast->next->next;
        slow=slow->next;

    }
    return slow;
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
    cout<<"The middle element of the linked list is: "<<midPoint(Head)->data;
    return 0;
}