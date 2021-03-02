#include<stdio.h>
#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int data){
        this->data = data;
        left=right=NULL;

    int insert(data){
        if(this.root==NULL){
            this.root = new node(data);
        }
    }
    }
};

void print_inorder(node* p){
    /*
    first go to left tree
    then the root
    then the right tree
    */
    if (p==NULL)
    {
       return; 
    }
    print_inorder(p->left);
    cout<<p->data;
    print_inorder(p->right);       
}

void print_postorder(node* p){
    /*
    Algorithm Postorder(tree)
   1. Traverse the left subtree, i.e., call Postorder(left-subtree)
   2. Traverse the right subtree, i.e., call Postorder(right-subtree)
   3. Visit the root.
   */

  if(p==NULL){
      return;
  }

    print_postorder(p->left);

    // then recur on right subtree 
    print_postorder(p->right); 
  
    // now deal with the node 
    cout << p->data << " "; 

}

void print_preorder(node* p){
    if(p==NULL){
        return;
    }
    cout<<p->data;
    print_preorder(p->left);
    print_preorder(p->right);

}

int main(){
    node* root;
    root = new node(1);
    root->left= new node(2);
    root->right= new node(3);
    print_preorder(root);
    cout<<endl;
    print_postorder(root);
    cout<<endl;
    print_inorder(root);
    return 0;
}