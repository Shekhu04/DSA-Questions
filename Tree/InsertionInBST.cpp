#include<iostream>
#include<queue>
using namespace std;

class Node{

public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }

};

void levelOrderTraversal(Node*root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";
            if(temp -> left) {
                q.push(temp->left);
            }

            if(temp->right) {
                q.push(temp->right);
            }
        }
    }
}

Node* insertIntoBST(Node* root, int data) {
    //base case
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(data > root->data) //insert in right part
    {
     root -> right = insertIntoBST(root -> right, data);
    }
    else  //insert in left part
    {
     root -> left = insertIntoBST(root->left,data);
    }

    return root;

}
//Function to take input 
void takeInput(Node* &root) {
     
     int data;
     cin >> data;

     while(data != -1) {
       root =  insertIntoBST(root,data);
        cin >> data;
     }
}

int main(){

    Node* root = NULL;

    cout << "Enter data for creating BST : " << endl;
    takeInput(root);
    
    cout << "Printing the BST" << endl;
    levelOrderTraversal(root);

    return 0;
}
