#include <iostream>
using namespace std;
struct node
{
  int val;
  struct node *next;
};
typedef struct node Node;
Node *RemoveDuplicate(Node *head)
{

  Node *curr = head;
  while (curr != nullptr && curr->next != nullptr)
  {
    if (curr->val == curr->next->val)
    {
      Node *temp = curr->next;
      curr->next = curr->next->next;
      delete temp;
    }
    else
    {
      curr = curr->next;
    }
  }
  return head;
}
void display(Node *head)
{
  Node *t = head;
  if (t == NULL)
  {
    cout << "Empty list";
    return;
  }

  while (t != NULL)
  {
    cout << t->val << "  ";
    t = t->next;
  }
}
int main()
{
  int n, ele;
  Node *head = nullptr;
  Node *temp = head;

  cout << "Enter the Number of elements:";
  cin >> n;
  cout << "Enter the elements to list:";
  while (n--)
  {
    Node *newnode = new Node;
    cin >> ele;
    newnode->val = ele;
    newnode->next = NULL;
    if (head == nullptr)
    {
      head = newnode;
      temp = head;
    }
    else
    {
      temp->next = newnode;
      temp = newnode;
    }
  }

  // display(head);
  RemoveDuplicate(head);
  display(head);
  return 0;
}