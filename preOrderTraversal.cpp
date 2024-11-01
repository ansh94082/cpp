#include <iostream>
using namespace std;

class treeNode{
    public:
    int val;
    treeNode* right;
    treeNode* left;


    treeNode(int val) {
        this -> val = val;
        this -> right = this -> left = nullptr;
    }

    treeNode(int val, treeNode* left , treeNode* right) {
        this -> val = val;
        this -> right = right;
        this -> left = left;
    }

};


void preOrderTraversal(treeNode* root) {
    if(root == nullptr) return;

    if(root -> left)
        preOrderTraversal(root -> left);

    cout << root -> val << endl;

    if(root -> right)
        preOrderTraversal(root -> right);
}

int main() {

    treeNode* node1 = new treeNode(1);
    treeNode* node2 = new treeNode(2);
    treeNode* node3 = new treeNode(3);
    treeNode* node4 = new treeNode(4);
    treeNode* node5 = new treeNode(5);
    treeNode* node6 = new treeNode(6);

    node1 -> left = node2;
    node1 -> right = node3;
    node2 -> left = node4;
    node2 -> right = node5;
    node3 -> right = node6;

    preOrderTraversal(node1); 

}