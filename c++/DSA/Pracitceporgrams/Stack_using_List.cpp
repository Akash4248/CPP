#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

class Stack
{
    Node *top;

public:
    Stack() : top(nullptr) {}

    void push(int x)
    {
        Node *newNode = new Node{x, top};
        top = newNode;
    }

    int pop()
    {
        if (!top)
        {
            cout << "Stack UnderFlow";
            return -1;
        }
        Node *temp = top;
        int data = top->val;
        top = top->next;
        delete temp;
        return data;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }

    void display()
    {
        Node *temp = top;
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack stack;
    int choice, val;

    do
    {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> val;
            stack.push(val);
            break;
        case 2:
            try
            {
                cout << "Popped value: " << stack.pop() << endl;
            }
            catch (runtime_error &e)
            {
                cout << e.what() << endl;
            }
            break;
        case 3:
            cout << "Stack contents: ";
            stack.display();
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}
