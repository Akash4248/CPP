#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* prev;
    Node* next;
};

void insertAtHead(Node*& head, int x) {
    Node* newNode = new Node{x, nullptr, head};
    if (head) head->prev = newNode;
    head = newNode;
}

void insertAtTail(Node*& head, int x) {
    Node* newNode = new Node{x, nullptr, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteFromHead(Node*& head) {
    if (!head) {
        cout << "List is empty!" << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    if (head) head->prev = nullptr;
    delete temp;
}

void deleteFromTail(Node*& head) {
    if (!head) {
        cout << "List is empty!" << endl;
        return;
    }
    if (!head->next) {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->prev->next = nullptr;
    delete temp;
}

void displayForward(Node* head) {
    if (!head) {
        cout << "List is empty!" << endl;
        return;
    }
    Node* temp = head;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void displayBackward(Node* head) {
    if (!head) {
        cout << "List is empty!" << endl;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int choice, val;

    do {
        cout << "\n1. Insert at Head\n2. Insert at Tail\n3. Delete from Head\n4. Delete from Tail\n5. Display Forward\n6. Display Backward\n7. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at head: ";
                cin >> val;
                insertAtHead(head, val);
                break;
            case 2:
                cout << "Enter value to insert at tail: ";
                cin >> val;
                insertAtTail(head, val);
                break;
            case 3:
                deleteFromHead(head);
                cout << "Deleted from head." << endl;
                break;
            case 4:
                deleteFromTail(head);
                cout << "Deleted from tail." << endl;
                break;
            case 5:
                cout << "List (Forward): ";
                displayForward(head);
                break;
            case 6:
                cout << "List (Backward): ";
                displayBackward(head);
                break;
            case 7:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 7);

    return 0;
}
