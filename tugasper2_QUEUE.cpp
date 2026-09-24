// QUEUE
#include <iostream>
using namespace std;

struct Node {
    int value;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void enqueue(int nilai) {
    Node *newNode = new Node;

    newNode->value = nilai;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode; 
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void dequeue() {
    if (head == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }

    Node *temp = head;

    head = head->next;

    if (head == NULL) {
        tail = NULL;
    }

    delete temp;
}

void printQueue(Node *head) {
    if (head == NULL) {
        cout << "Queue is empty" << endl;
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
    enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << "Isi Queue: ";
    printQueue(head);

    dequeue();

    cout << "Setelah dequeue: ";
    printQueue(head);

    return 0;
}