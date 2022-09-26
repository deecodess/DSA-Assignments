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
void print(Node* Head){
    Node* temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void InsertAtHead(Node* &Head, int d){
    //new node create
    Node* Temp=new Node(d);
    Temp->next=Head;
    Head=Temp;
}
void InsertAtTail(Node* &Tail, int d){
    //new node create
    Node* Temp=new Node(d);
    Tail->next=Temp;
    Tail=Temp;
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

}
void  reverse(Node* &head){
    Node* temp=head;
    if(head==NULL)
        return ;
    Node* x=head;
    reverse(x->next);
    cout<<x->data<<" ";
}
int main(){
    Node* Head=NULL;
    Node* Tail=NULL;
    cout<<"Enter the number of elements you want to insert in the linked list: ";
    int n;
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        if(Head==NULL){
            Node* Temp=new Node(d);
            Head=Temp;
            Tail=Temp;
        }
        else{
            InsertAtTail(Tail, d);
        }
    }
    cout<<"The linked list is: ";
    print(Head);
    //reverse(Head);
    cout<<"The reversed linked list is: ";
    reverse(Head);
    return 0;
}