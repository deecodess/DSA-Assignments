//Priority Queue using Heap
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* insert(node* root,int d){
    if(root==NULL){
        return new node(d);
    }
    if(d<=root->data){
        root->left=insert(root->left,d);
    }
    else{
        root->right=insert(root->right,d);
    }
    return root;
}
node* build(){
    int d;
    cin>>d;
    node* root=NULL;
    while(d!=-1){
        root=insert(root,d);
        cin>>d;
    }
    return root;
}
void priorityqueue(node* root){
    if(root==NULL){
        return;
    }
    priorityqueue(root->left);
    cout<<root->data<<" ";
    priorityqueue(root->right);
}
int main(){
    node* root=build();
    priorityqueue(root);
    return 0;
}