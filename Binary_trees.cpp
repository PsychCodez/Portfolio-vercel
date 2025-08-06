#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        data=data;
        left=NULL;
        right=NULL;
    }

};
int id=-1;
int count=0;
Node* BuildTree(vector<int> arr){
    id++;
    if(arr[id]==-1){
        return NULL;
    }
    Node*root=new Node(arr[id]);
    root->left=BuildTree(arr);
    root->right=BuildTree(arr);
    return root;

}
int count_nodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return 1+count_nodes(root->left)+count_nodes(root->right);

}

int main(){
    vector<int> arr = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=BuildTree(arr);

}

