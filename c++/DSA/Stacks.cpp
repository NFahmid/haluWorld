#include <iostream>
using namespace std;

// template<typename T>
// class Stack;

template<typename T>
class Node{
public:
    T data ;
    Node<T> * next;

    Node(T d){
        data = d;
    }
};

template<typename T>
class Stack{
    Node<int> * top;
public:
    Stack(){
        top = NULL;
    }

    void push(int data){
        Node<int> * n = new Node<int>(data);
        n->next = top;
        top = n;
    }

    void pop(){
        if (top == NULL){
            cout << "Stack is empty";
            return;
        }
        Node<int> * temp = top;
        top = top->next;
        delete temp;
    }

    void show(){
        if (top == NULL){
            cout << "Stack is empty";
            return;
        }
        Node<int> * temp = top;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main(int argc, char const *argv[])
{
    
    return 0;
}
