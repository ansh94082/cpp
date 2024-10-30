#include <iostream>
using namespace std;

class tree{
    int val;
    tree* left;
    tree* right;

    tree(int val){
        this -> val = val;
        this -> left = NULL;
        this -> right = NULL;
    }
};