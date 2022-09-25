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
void DeleteAtHead(Node* &Head){
    Node* Temp=Head;
    Head=Head->next;
    delete Temp;
}
void DeleteAtTail(Node* &Head){
    Node* Temp=Head;
    while(Temp->next->next!=NULL){
        Temp=Temp->next;
    }
    delete Temp->next;
    Temp->next=NULL;
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
int search(Node* Head, int key){
    Node* Temp=Head;
    int cnt=1;
    while(Temp!=NULL){
        if(Temp->data==key){
            return cnt;
        }
        Temp=Temp->next;
        cnt++;
    }
    return -1;
}
int main(){
    Node* Head=NULL;
    Node* Tail=NULL;
    cout<<"Enter which operation you want to perform"<<endl;
    cout<<"1. Insert at head"<<endl;
    cout<<"2. Insert at tail"<<endl;
    cout<<"3. Insert at position"<<endl;
    cout<<"4. Delete at head"<<endl;
    cout<<"5. Delete at tail"<<endl;
    cout<<"6. Delete at position"<<endl;
    cout<<"7. Search"<<endl;
    cout<<"8. Print"<<endl;
    cout<<"9. Exit"<<endl;
    int op;
    cin>>op;
    while(op!=9){
        if(op==1){
            int d;
            cin>>d;
            InsertAtHead(Head, d);
            if(Tail==NULL){
                Tail=Head;
            }
        }
        else if(op==2){
            int d;
            cin>>d;
            InsertAtTail(Tail, d);
            if(Head==NULL){
                Head=Tail;
            }
        }
        else if(op==3){
            int d, pos;
            cin>>d>>pos;
            InsertAtPosition(Tail, Head, d, pos);
        }
        else if(op==4){
            DeleteAtHead(Head);
        }
        else if(op==5){
            DeleteAtTail(Head);
        }
        else if(op==6){
            int pos;
            cin>>pos;
            DeleteAtPosition(Head, pos);
        }
        else if(op==7){
            int key;
            cin>>key;
            cout<<search(Head, key)<<endl;
        }
        else if(op==8){
            print(Head);
        }
        cin>>op;
    }
    return 0;
    
}