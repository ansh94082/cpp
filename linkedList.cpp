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
        int count = 1;
        node* temp = head;

        if (position == 1) {
            insertAtHead(head, d);
            return;
        }

        while(count < position-1){
            temp = temp -> next;
            count++;

        } 
       
    }
    void deleteNode(node* &head,int position , node* &tail) {
        int count = 1;
        node* temp = head;

        while(count != position-1){
            temp = temp -> next;
            count++;
        }
        if(temp -> next != tail && temp -> next != NULL ){
            node* curr = temp -> next;
            temp -> next  = curr -> next; 
        }
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

class node2{
    public: 
    int data;
    node2* next;
    node2* prev;
    node2(int data) {

        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }

    void insertAtHead(node2* &head, int d) {

        node2* temp = new node2(d);
       
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
    void insertAtTail(node2* &tail, int d){
        node2* temp = new node2(d);
        tail -> next = temp;
        temp -> prev = tail;
        temp -> next = NULL;
        tail = temp;
    }
    void insertInMiddle(node2* &tail ,node2* &head ,int position, int d){
        node2* temp = head;
        node2* newInsert = new node2(d);
        int count = 1;
        if (position == 1) {
            insertAtHead(head, d);
            return;
        }
        while(count <= position-1){
            temp = temp -> next;
        }
        if(temp -> next = NULL){
            insertAtTail(tail , d);
        }
      
        node2* k = temp -> next;
        k -> prev = newInsert;

        newInsert -> next = k;
        temp -> next = newInsert;
        newInsert -> prev = temp;


    }
    void printNode(node2* &head) {
        node2* temp = head;

        while(temp != NULL) {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }


};


int main (){

    node2* y = new node2(10);
    node2* head = y;
    node2* tail = y;



    y->node2::printNode(head);
    y->node2::insertAtHead(head , 20);
    y->node2::printNode(head);
    y->node2::insertAtHead(head , 30);
    y->node2::printNode(head);
    y->node2::insertAtHead(head , 40);
    y->node2::printNode(head);
    y->node2::insertAtHead(head , 50);
    y->node2::printNode(head);
    // y->node2::insertAtHead(head , 60);
    // y->node2::printNode(head);
    // y->node2::insertAtHead(head , 70);
    // y->node2::printNode(head);



    cout << endl << endl;


    y->node2::printNode(head);
    y->node2::insertAtTail(tail , 20);
    y->node2::printNode(head);
    // y->node2::insertAtTail(tail , 30);
    // y->node2::printNode(head);
    // y->node2::insertAtTail(tail , 40);
    // y->node2::printNode(head);
    // y->node2::insertAtTail(head , 50);

    cout << endl << endl;

    y->node2::insertInMiddle(tail,head ,3, 78);
    y->node2::printNode(head);
    y->node2::insertInMiddle(tail ,head ,3 ,98);
    y->node2::printNode(head);
    y->node2::insertInMiddle(tail,head ,3 ,118);
    y->node2::printNode(head);



    // node* a = new node(10);
    // node* head = a;
    // node* tail = a;
    // a->printNode(head);
    // a->insertAtHead(head , 10);
    // a->printNode(head);
    // a->insertAtTail(tail ,15);
    // a->printNode(head);
    // a->insertAtTail(tail ,85);
    // a->printNode(head);
    // a->insertAtHead(head , 18);
    // a->printNode(head);
    // a->insertInMiddle(head, 2 , 45);
    // a->deleteNode(head , 3 , tail);
    // a->printNode(head);   
    
    // cout << a -> data << endl;
    // cout << a -> next << endl;
    return 0;
}