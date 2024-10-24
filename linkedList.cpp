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
    void insertAtTail(node* &tail , int d) {
        node* temp = new node(d);
        tail -> next = temp;
        tail = tail -> next;

    }
    void insertInMiddle(node* &head,int position  , int d) {
        int count = 0;
        node* temp = head;

        while(count != position-1){
            temp = temp -> next;
            count++;

        } 
        node* newInsert = new node(d);
        temp -> next = newInsert;
        newInsert -> next = temp -> next;
        temp -> next = newInsert;

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
    node* tail = a;
    a->printNode(head);
    a->insertAtHead(head , 10);
    a->printNode(head);
    a->insertAtTail(tail ,15);
    a->printNode(head);
    a->insertAtTail(tail ,85);
    a->printNode(head);
    a->insertAtHead(head , 18);
    a->printNode(head);
    a->insertInMiddle(head , 3 ,69);
    a->printNode(head);
    
    // cout << a -> data << endl;
    // cout << a -> next << endl;
    //return 0;
}