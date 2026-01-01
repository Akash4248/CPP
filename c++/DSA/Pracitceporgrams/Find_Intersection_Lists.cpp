#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
};

int getLength(Node* head) {
    int length = 0;
    while (head) {
        length++;
        head = head->next;
    }
    return length;
}

Node* findIntersection(Node* head1, Node* head2) {
    int len1 = getLength(head1);
    int len2 = getLength(head2);

    while (len1 > len2) {
        head1 = head1->next;
        len1--;
    }

    while (len2 > len1) {
        head2 = head2->next;
        len2--;
    }

    while (head1 && head2) {
        if (head1 == head2) return head1;
        head1 = head1->next;
        head2 = head2->next;
    }

    return nullptr;
}

void display(Node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node *head1 = nullptr, *temp1 = nullptr;
    Node *head2 = nullptr, *temp2 = nullptr;
    Node *intersection = nullptr;

    cout << "Enter number of elements in the first list: ";
    int n1, val;
    cin >> n1;

    cout << "Enter the elements: ";
    while (n1--) {
        cin >> val;
        Node* newNode = new Node{val, nullptr};
        if (!head1) {
            head1 = temp1 = newNode;
        } else {
            temp1->next = newNode;
            temp1 = newNode;
        }
        if (n1 == 1) intersection = temp1; 
    }

    cout << "Enter number of elements in the second list: ";
    int n2;
    cin >> n2;

    cout << "Enter the elements: ";
    while (n2--) {
        cin >> val;
        Node* newNode = new Node{val, nullptr};
        if (!head2) {
            head2 = temp2 = newNode;
        } else {
            temp2->next = newNode;
            temp2 = newNode;
        }
    }

   
    if (intersection) temp2->next = intersection;

    Node* result = findIntersection(head1, head2);

    if (result) {
        cout << "Intersection point value: " << result->val << endl;
    } else {
        cout << "No intersection point found." << endl;
    }

    return 0;
}
