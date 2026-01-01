#include <iostream>
using namespace std;

struct node {
    int val;
    struct node *next;
};
typedef struct node Node;

// Function to merge two sorted linked lists
Node* MergeLists(Node *head1, Node *head2) {
    if (!head1) return head2;
    if (!head2) return head1;

    Node *a = head1, *b = head2;
    Node *head = nullptr, *temp = nullptr;

    while (a && b) {
        if (a->val <= b->val) {
            if (!head) {
                head = a;
                temp = a;
                a = a->next;
            } else {
                temp->next = a;
                temp = a;
                a = a->next;
            }
        } else {
            if (!head) {
                head = b;
                temp = b;
                b = b->next;
            } else {
                temp->next = b;
                temp = b;
                b = b->next;
            }
        }
    }

    // Attach remaining nodes
    if (a) temp->next = a;
    if (b) temp->next = b;

    return head;
}

// Function to display the linked list
void display(Node *head) {
    if (!head) {
        cout << "Empty list" << endl;
        return;
    }
    Node *t = head;
    while (t) {
        cout << t->val << " ";
        t = t->next;
    }
    cout << endl;
}

// Function to take input for a linked list
Node* take_Input() {
    int n, ele;
    Node *head = nullptr, *temp = nullptr;

    cout << "Enter the Number of elements: ";
    cin >> n;
    if (n <= 0) return nullptr;

    cout << "Enter the elements to list: ";
    while (n--) {
        Node *newnode = new Node;
        cin >> ele;
        newnode->val = ele;
        newnode->next = nullptr;

        if (!head) {
            head = newnode;
            temp = head;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
}

int main() {
    cout << "Input for first list:" << endl;
    Node *head1 = take_Input();

    cout << "Input for second list:" << endl;
    Node *head2 = take_Input();

    cout << "\nAfter Merging:" << endl;
    Node *mergedHead = MergeLists(head1, head2);
    display(mergedHead);

    return 0;
}
