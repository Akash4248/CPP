#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

class Queue
{
    Node *front;
    Node *rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(int x)
    {
        Node *newNode = new Node{x, nullptr};
        if (!rear)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue()
    {
        if (!front)
        {
            cout << "Queue UnderFlow!";
            return -1;
        };
        Node *temp = front;
        int data = front->val;
        front = front->next;
        if (!front)
            rear = nullptr;
        delete temp;
        return data;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }

    void display()
    {
        Node *temp = front;
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
    Queue queue;
    int choice, val;

    do
    {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> val;
            queue.enqueue(val);
            break;
        case 2:
            try
            {
                cout << "Dequeued value: " << queue.dequeue() << endl;
            }
            catch (runtime_error &e)
            {
                cout << e.what() << endl;
            }
            break;
        case 3:
            cout << "Queue contents: ";
            queue.display();
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
