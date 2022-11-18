//BST having insert, delete,traverse,maximum depth and minimum depth 
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
void print(node* root){
    if(root==NULL){
        return;
    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
node* search(node* root,int d){
    if(root==NULL){
        return NULL;
    }
    if(root->data==d){
        return root;
    }
    if(d<=root->data){
        return search(root->left,d);
    }
    else{
        return search(root->right,d);
    }
}
node* deleteInBST(node* root,int d){
    if(root==NULL){
        return NULL;
    }
    else if(d<root->data){
        root->left=deleteInBST(root->left,d);
        return root;
    }
    else if(d==root->data){
        //case 1: no child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //case 2: 1 child
        if(root->left!=NULL && root->right==NULL){
            node* temp=root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL && root->right!=NULL){
            node* temp=root->right;
            delete root;
            return temp;
        }
        //case 3: 2 children
        node* replace=root->right;
        while(replace->left!=NULL){
            replace=replace->left;
        }
        root->data=replace->data;
        root->right=deleteInBST(root->right,replace->data);
        return root;
    }
    else{
        root->right=deleteInBST(root->right,d);
        return root;
    }
}
int maximumdepth(node* root){
    if(root==NULL){
        return 0;
    }
    int left=maximumdepth(root->left);
    int right=maximumdepth(root->right);
    return max(left,right)+1;
}
int minimumdepth(node* root){
    if(root==NULL){
        return 0;
    }
    int left=minimumdepth(root->left);
    int right=minimumdepth(root->right);
    return min(left,right)+1;
}
int main() {
    node* root=build();
    print(root);
    cout<<endl;
    int s;
    cin>>s;
    node* temp=search(root,s);
    if(temp==NULL){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }
    int d;
    cin>>d;
    root=deleteInBST(root,d);
    print(root);
    return 0;
}
