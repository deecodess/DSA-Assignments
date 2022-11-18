//Write a program interleave the first half of the queue with second half.
// For example, if the given queue is 11 12 13 14 15 16 17 18 19 20, the
// function should change it to 11 16 12 17 13 18 14 19 15 20.
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
        cout<<"Queue is empty"<<endl;
    }
}
void interleave(int rear, int front, int a[]){
    int n=size(rear,front)/2;
    int temp[1000];
    int i=0;
    while(i<size(rear,front)/2){
        temp[i]=dequeue(rear,front,a,size(rear,front));
        i++;
    }
    i=0;
    while(i<size(rear,front)/2){
        enqueue(rear,front,a,size(rear,front),temp[i]);
        i++;
    }
    i=0;
    while(i<size(rear,front)/2){
        enqueue(rear,front,a,size(rear,front),dequeue(rear,front,a,size(rear,front)));
        i++;
    }
}
int main(){
    int a[10];
    int rear=-1;
    int front=-1;
    enqueue(rear,front,a,10,11);
    enqueue(rear,front,a,10,12);
    enqueue(rear,front,a,10,13);
    enqueue(rear,front,a,10,14);
    enqueue(rear,front,a,10,15);
    enqueue(rear,front,a,10,16);
    enqueue(rear,front,a,10,17);
    enqueue(rear,front,a,10,18);
    enqueue(rear,front,a,10,19);
    enqueue(rear,front,a,10,20);
    print(rear,front,a);
    interleave(rear,front,a);
    print(rear,front,a);
    return 0;
}