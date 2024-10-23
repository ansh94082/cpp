#include <iostream>
using namespace std;



class node {
    public:
    int data;
    node* next;

    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    public:

    void insertAtHead(node* &head , int d) {
        node* temp = new node(d);
        temp -> next = head;
        head = temp;

    }
    void printNode(node* &head) {
        node* temp = head;

        while(temp != NULL) {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }
};


int main (){


    node* a = new node(10);
    node* head = a;
    a->printNode(head);
    a->insertAtHead(head , 10);
    a->printNode(head);
    
    // cout << a -> data << endl;
    // cout << a -> next << endl;
    
}