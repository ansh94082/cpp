#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class treeNode{
    public:

    int val;
    vector <treeNode*> child;

    treeNode(int val) {
        this -> val = val;
    }


};


// void dfs(treeNode* root) {

//     if(root == nullptr) 
//         return;

//     cout << root -> val << endl;

//     for(auto i : root -> child)

// }

void bfs(treeNode* root) {
    queue<treeNode*>q;

    q.push(root);

    while(!q.empty()) {

        treeNode* f = q.front();
        q.pop();
        cout << f -> val << endl << " ";
        for(auto i : f ->child) {
            q.push(i);

        } 
    }

}







int main() {

    treeNode* node1 = new treeNode(1);
    treeNode* node2 = new treeNode(2);
    treeNode* node3 = new treeNode(3);
    treeNode* node4 = new treeNode(4);
    treeNode* node5 = new treeNode(5);
    treeNode* node6 = new treeNode(6);
    treeNode* node7 = new treeNode(7);
    treeNode* node8 = new treeNode(8);
    treeNode* node9 = new treeNode(9);
    treeNode* node0 = new treeNode(0);


    node0 -> child = {node1 , node2 , node3};
    node4 -> child = {node5 , node6 , node7};
    node8 -> child = {node9};
    
    bfs(node0);
    cout << endl;

}