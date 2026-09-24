// STACK 
#include <iostream>
using namespace std;

struct Node {
    int value;
    Node *next;
};

Node *head = NULL;

void push(int nilai) {
    Node *newNode = new Node;

    newNode->value = nilai;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void pop() {
    if (head == NULL) {
        cout << "Stack is empty" << endl;
        return;
    }

    Node *temp = head;

    head = head->next;

    delete temp;
}

void printStack(Node *head) {
    if (head == NULL) {
        cout << "Stack is empty" << endl;
        return;
    }

    Node *temp = head;

    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);

    cout << "Isi Stack: ";
    printStack(head);

    pop();

    cout << "Setelah pop: ";
    printStack(head);

    return 0;
}