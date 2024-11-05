#include <iostream>
using namespace std;



class circular{

    public:
    int data;
    circular* next;

    circular(int data){
        this -> data = data;
        this -> next = NULL;
    }
    
    void insertAtHead(circular* &head, circular* &tail, int d){
        circular* temp = new circular(d);
        temp -> next = head;
        tail -> next = temp;
        head = temp;
    }
    void printCircular(circular* &head){

        circular* temp = head;
        do{
            cout << temp -> data << " ";
            temp = temp -> next;
        }while(temp != head);
        cout << endl;
        

    }
};



int main(){
    circular* a = new circular(10);
    circular* &head = a;
    circular* &tail = a;

    a->insertAtHead(head , tail , 23);
    a->insertAtHead(head , tail , 33);
    a->insertAtHead(head , tail , 43);
    a->insertAtHead(head , tail , 53);
    a->printCircular(head);

}
