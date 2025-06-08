#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
    this -> data = val;
    left = NULL;
    right = NULL;
    }
};

// 
Node* buildBST(Node* root, int val)
{
    //base case 
    if(root == NULL)
    {
        root = new Node(val);
        return root;
    }
    else{
        if(val < root -> data){
            root -> left = buildBST(root -> left, val);
        }
        else{
            root -> right = buildBST(root -> right, val);
        }
    }
    return root;
}

void createTree(Node* &root)
{
    int val;
    cout << "Enter the value -> ";
    cin >> val;
    while(val != -1)
    {
        root = buildBST(root, val);
        cout << "Enter the value -> ";
        cin >> val;
    }
}

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* front = q.front();
        q.pop();
        if(front == NULL)
        {
            cout << endl;
            if(!q.empty()) q.push(NULL);
        }
        else{
            cout << front -> data << " ";
             if(front -> left)
            { 
                q.push(front -> left); 
            }
            if(front -> right)
            { 
                q.push(front -> right);
            }
        }
       
    }
}

int main(){

    Node* root = NULL;
    createTree(root);
    levelOrderTraversal(root);

    return 0;
}