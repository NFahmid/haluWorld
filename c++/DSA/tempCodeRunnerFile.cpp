#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int d):data(d), next(NULL){}
    
};

class List{
    Node* head;
    Node* tail;

public:
    List():head(NULL), tail(NULL){}

    void push_front(int data){
        if (head == NULL){
            Node * n = new Node(data);
            head = tail = n;
            return;
        }
        Node * n = new Node(data);
        n->next = head;
        head = n;
    }

    void push_back(int data){
        if (head == NULL){
            Node * n = new Node(data);
            head = tail = n;
        }
        Node * n = new Node(data);
        tail->next = n;
        tail = n;
    }

    void print(){
        while (head!=NULL){
            cout << head->data<<" ";
            head = head->next;
        }
    }
};

int main(int argc, char const *argv[])
{
    List l;
    l.push_back(5);
    l.push_back(2);
    l.push_back(3);
    l.print();

    return 0;
}
