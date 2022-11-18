#include <iostream>
using namespace std;

int size(int rear, int front){
    return rear-front+1;
}
bool isEmpty(int rear, int front){
    if(front==-1 || front>rear)
        return true;
    else{
        return false;
    }
}
bool isFull(int rear, int front, int n){
    return rear==n-1;
}
int peek(int front,int rear,int a[]){
    if(!isEmpty(rear,front)){
        return a[front];
    }
    else{
        return -1;
    }
}
void enqueue(int &rear, int &front, int a[], int n, int x){
    if(isFull(rear,front,n)){
        cout<<"Queue overflow"<<endl;
    }
    else if(isEmpty(rear,front)){
        front=0;
        rear=0;
        a[rear]=x;
    }
    else{
        rear++;
        a[rear]=x;
    }
}
int  dequeue(int &rear, int &front, int a[], int n){
    int temp;
    if(isEmpty(rear,front)){
        cout<<"Queue underflow"<<endl;
        return -1;
    }
    else if(front==rear){
        temp=a[front];
        front=-1;
        rear=-1;
        return temp;
    }
    else{
        temp=a[front];
        front++;
        return temp;
    }
}
void print(int rear, int front, int a[]){
    if(!isEmpty(rear,front)){
        for(int i=front;i<=rear;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"Queue Underflow"<<endl;
    }
}
int main(){
    int n,front=-1,rear=-1;
    cout<<"Enter the size of the queue: ";
    cin>>n;
    int a[1000];
    cout<<"Enter the task you want to perform in the queue: 1. Enqueue 2. Dequeue 3. Peek 4. Print 5. Exit"<<endl;
    int task;
    cin>>task;
    while(task!=5){
        if(task==1){
            int x;
            cout<<"Enter the element you want to enqueue: ";
            cin>>x;
            enqueue(rear,front,a,n,x);
        }
        else if(task==2){
            int x=dequeue(rear,front,a,n);
            if(x!=-1){
                cout<<"The element dequeued is: "<<x<<endl;
            }
        }
        else if(task==3){
            int x=peek(front,rear,a);
            if(x!=-1){
                cout<<"The element at the front of the queue is: "<<x<<endl;
            }
        }
        else if(task==4){
            print(rear,front,a);
        }
        else{
            cout<<"Invalid task"<<endl;
        }
        cout<<"Enter the task you want to perform in the queue: 1. Enqueue 2. Dequeue 3. Peek 4. Print 5. Exit"<<endl;
        cin>>task;
    }
    

}