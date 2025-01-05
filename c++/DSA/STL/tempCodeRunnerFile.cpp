#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int d): data(d), next(NULL){}
};

class List{
    Node * head;
    Node * tail;
public:
    List(): head(NULL), tail(NULL){}

    void push_front(int data){
        if (head == NULL){
            Node * n = new Node(data);
            head = tail = n;
            return;
        }
        else{
            Node * n = new Node(data);
            n->next = head;
            head = n;
        }
    }

    void push_back(int data){
        if (head == NULL){
            Node * n = new Node(data);
            head = tail = n;
            return;
        }
        else {
            Node * n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }

    void show(){
        if (head == NULL){
            cout << "List is empty";
        }
        else {
            while(head != NULL){
                cout << head->data << " ";
                head = head->next;
            }
        }
    }
};

int main(int argc, char const *argv[])
{
    List l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);
    l.push_back(8);
    l.push_back(9);
    l.push_back(10);

    l.show();

    l.push_back(11);
    l.push_back(12);
    l.push_back(13);

    l.show();
    return 0;
}
