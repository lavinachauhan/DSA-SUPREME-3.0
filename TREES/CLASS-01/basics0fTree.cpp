#include<bits/stdc++.h>
using namespace std;


class node{
    public:

    int data;
    node* left;
    node* right;

    //constructor
    node(int value)
    {
        this -> data = value;
        this -> left = NULL;
        this -> right = NULL;
    }
};

    node* create()
    {
        int value;
        cout << "Enter the data: ";
        cin >> value;

        //check data is valid or not
        if(value == -1) return NULL;
        node* root = new node(value);

        //make left node for current node
        cout << "Make left node for: " << value << endl;
        root -> left = create();

        //after returning from left, make left node for current node
        cout << "Make right node for: " << value << endl;
        root -> right = create();
        
        //at the end we have to return root node
        return root;
    }

    void inOrderTraversal(node* root)
    {
        //inOrderTraversal = left, root, right
        if(root == NULL) return;

        inOrderTraversal(root -> left);
        cout << root -> data << " ";
        inOrderTraversal(root -> right);
    }

    void preOrderTraversal(node* root)
    {
        //preOrderTraversal = root, left, right
        if(root == NULL) return;

        cout << root -> data << " ";
        preOrderTraversal(root -> left);
        preOrderTraversal(root -> right);
    }

    void postOrderTraversal(node* root)
    {
        //postOrderTraversal = left, right, root
        if(root == NULL) return;
        postOrderTraversal(root -> left);
        postOrderTraversal(root -> right);
        cout << root -> data << " ";
    }

    // void levelOrderTraversal(node* root)
    // {
    //     queue<node*> q;
    //     //sb se pehle qoot ko insert kra do
    //     q.push(root);
    //     //ab use print kro do, aur processing kro
    //     while(!q.empty())
    //     {
    //         //step 01-> access queue front element
    //         node* front = q.front();
    //         cout << front->data << " ";
    //         q.pop();

    //         //step 02-> push, front element left and right child
    //         if(front->left != NULL) q.push(front->left);
    //         if(front->right != NULL) q.push(front->right);
    //     }
    // }

     void levelOrderTraversal(node* root)
    {
        queue<node*> q;
        //sb se pehle qoot ko insert kra do
        q.push(root);
        q.push(NULL);
        //null ko push kr do,ye btaega ki same level 
        //ke saare elements aa chuke hai(children), aur same level ke saare node jaa chuke hai(parent of those children)
        //ab use print kro do, aur processing kro
        while(!q.empty())
        {
            //step 01-> access queue front element
            node* front = q.front();
            q.pop();

            if(front == NULL)
            {
                cout << endl;
                if(!q.empty()) q.push(NULL);
            }
            else{
                cout << front->data << " ";
                //step 02-> push, front element left and right child
                if(front->left != NULL) q.push(front->left);
                if(front->right != NULL) q.push(front->right);
            }
          
        }
      
    }
int main()
{
    node* root = NULL;
    root = create();

    cout << "Root node is-> " << root -> data;
    cout << endl << "In Order Traversal :->";
    inOrderTraversal(root);

    cout << endl << "pre Order Traversal :->";
    preOrderTraversal(root);

    cout << endl << "post Order Traversal :->";
    postOrderTraversal(root);

    cout << endl << "Level order Traversal :->";
    levelOrderTraversal(root);


    
    return 0;
}
