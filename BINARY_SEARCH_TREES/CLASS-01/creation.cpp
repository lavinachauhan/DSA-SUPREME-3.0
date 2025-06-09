#include<bits/stdc++.h>
using namespace std;

//tree node structure using class
class node{
    public:
    int data;
    node* left;
    node* right;

    //constructor
    node(int val)
    {
        this -> data = val;
        left = NULL;
        right = NULL;
    }
};

node* builtBST(node* root, int val)
{
    if(root == NULL)
    {
        root = new node(val);
    }
    else{
        if(val < root -> data){
            root -> left = builtBST(root -> left, val);
        }
        else{
            root -> right = builtBST(root -> right, val);
        }
    }
    return root;
}

void createNode(node* &root)
{
    int val;
    cout << "Enter the value -> ";
    cin >> val;
    while(val != -1)
    {
        root = builtBST(root, val);
        cout << "Enter the value -> ";
        cin >> val;
    }
}

void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* front = q.front();
        q.pop();
        if(front == NULL)
        {
            cout << endl;
            if(!q.empty()) q.push(NULL);
        }
        else{
            cout << front -> data << " ";
            if(front -> left) q.push(front -> left);
            if(front -> right) q.push(front -> right);
        }
    }
}

void postOrderTraversal(node* root)
{
    if(root == NULL) return;
    //left right root
    postOrderTraversal(root -> left);
    postOrderTraversal(root -> right);
    cout << root -> data << " ";
}

void inOrderTraversal(node* root)
{
    if(root == NULL) return;
    //left root right
    inOrderTraversal(root -> left);
    cout << root -> data << " ";
    inOrderTraversal(root -> right);

}

void preOrderTraversal(node* root)
{
    if(root == NULL) return;
    //root left right
    cout << root -> data << " ";
    preOrderTraversal(root -> left);
    preOrderTraversal(root -> right);
}

int findMaximum(node* root)
{
    while(root -> right)
    {
        root = root -> right;
    }
    return root -> data;
}

int findMinimum(node* root)
{
    while(root -> left)
    {
        root = root -> left;
    }
    return root -> data;
}

bool searching(node* root, int target)
{
    if(root == NULL) return false;
    if(root -> data == target) return true;
    else{
        if(target < root -> data){
            bool leftAns = searching(root -> left, target);
        }
        else{
            bool rightAns = searching(root -> right, target);
        }
    }
}

//delete a node -> leetcode question number -> 450 (solved)

int main()
{
    //root node
    node* root = NULL;
    createNode(root);
    cout << "let us print the tree level wise" << endl;
    levelOrderTraversal(root);
    cout << endl << "PostOrderTraversal ->";
    postOrderTraversal(root);
    cout << endl << "preOrderTraversal ->";
    preOrderTraversal(root);
    cout << endl << "inOrderTraversal ->";
    inOrderTraversal(root);

    cout << endl;

    cout << "Maximum number is-> " << findMaximum(root)<< endl;
    cout << "Minimum number is-> " << findMinimum(root) << endl;
    int target;
    cout << "Enter the target value to search in the tree -> ";
    cin >> target;
    cout << "Is target present -> " << searching(root, target);
    return 0;
}