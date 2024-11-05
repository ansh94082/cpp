#include <iostream>
#include <queue>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }


};

Node* createTree () {
    
    cout << "enter the value for node " << endl;
    int data;
    cin >> data;

    if(data == -1) {
        return NULL;
    }
    // create node
    Node* root = new Node(data);

    cout << "enter the data for left of " <<  root -> data << endl;
    // create left subtree
    root -> left = createTree();
    cout << "enter the data for right of " <<  root -> data << endl;
    // create right subtree
    root -> right = createTree();
    
    return root;

}


void inOrderTraversal(Node* root) {
    
    if (root == NULL) {
        return;
    }

    inOrderTraversal(root -> left);
    cout << root -> data << endl;
    inOrderTraversal(root -> right);

}

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){

        Node* front = q.front();
        q.pop();

        cout << front -> data << " " << endl;

        if(front -> left != NULL)
            q.push(front-> left);

        if(front -> right != NULL)
            q.push(front -> right);

    }


}

int main() {

    Node* root = createTree();

    cout << "inOrderTraversal" << endl;

    inOrderTraversal(root);
    
    cout << "levelOrderTraversal\n";

    levelOrderTraversal(root);

    return 0;
}
