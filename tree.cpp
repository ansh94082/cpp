#include <iostream>
using namespace std;

class tree{

    public:

    int val;
    tree* left;
    tree* right;

    tree (int rval) {
        this -> val = rval;
        this -> left = NULL;
        this -> right = NULL;
    }
    // void setRight(tree* k, int data) {
    //     k -> rval = data;
    // }
    void print(tree* k) {
        cout <<"right value " << k -> val << endl;
    }
};

tree* buildTree (tree* root) {

    cout << " enter the data for the node " << endl;
    int data;
    cin >> data;
    root = new tree(data);

    if(data == -1){
        return NULL;
    }

    cout << "enter data for left of " << data << " " <<  endl;
    int d;
    cin >> d;
    root -> left = buildTree(root -> left);
    cout << "enter data for rightof " << data << " " << endl;
    int k;
    cin >> k;
    root -> right = buildTree(root -> right);
    return root;

}

int main() {

    tree* root = NULL;
    root = buildTree(root);

}