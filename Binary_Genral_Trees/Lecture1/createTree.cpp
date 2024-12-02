#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->data = val;
        this->left=NULL;
        this->right= NULL;
    }
};

Node* CreateTree()
{
    cout<<"Enter the value in the node";
    int data ;
    cin>>data;

    if(data ==-1)
    {
        return NULL;
    }  
   // step 1: Create Node
    Node* root = new Node(data);

    // step 2 : create left subtree
  cout<<"Left of Node "<<root->data<<endl;
    root->left = CreateTree();

    // step 3 : create right subtree
 cout<<"right of Node "<<root->data<<endl;
    root->right = CreateTree();


}

int main()
{
     Node* root = CreateTree();
     cout<<"The root node is :" <<root->data<<endl; 

}