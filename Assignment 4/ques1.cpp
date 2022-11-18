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
bool isEmpty(Node* top){
    return top==NULL;
}

Node* peek( Node* top){
    if(!isEmpty(top)){
        return top;
    }
    else{
        return NULL;
    }
}
void push(Node* &top, int x){
    Node* temp = new Node(x);
    temp->next=top;
    top=temp;
}
void pop(Node* &top){
    if(!isEmpty(top)){
        Node *temp=top;
        top=top->next;
        delete temp;
    }
    else{
        cout<<"Stack underflow"<<endl;
    }
}
void print(Node* top){
    if(!isEmpty(top)){
        Node* temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    else{
        cout<<"Stack underflow"<<endl;
    }
}

int main(){
    Node* top=NULL;
    cout<<"Enter the task you want to perform in the stack: 1. Push 2. Pop 3. Peek 4. Print 5. Exit"<<endl;
    int task;
    cin>>task;
    while(task!=5){
        if(task==1){
            int x;
            cout<<"Enter the element you want to push: ";
            cin>>x;
            push(top, x);
        }
        else if(task==2){
            pop(top);
        }
        else if(task==3){
            Node* temp=peek(top);
            if(temp!=NULL){
                cout<<temp->data<<endl;
            }
        }
        else if(task==4){
            print(top);
        }
        else{
            cout<<"Invalid task"<<endl;
        }
        cout<<"Enter the task you want to perform in the stack: 1. Push 2. Pop 3. Peek 4. Print 5. Exit"<<endl;
        cin>>task;
    }
    return 0;
}