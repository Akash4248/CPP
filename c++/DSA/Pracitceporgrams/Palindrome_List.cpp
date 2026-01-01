#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    char val;
    struct node *next;
};
typedef struct node Node;

bool CheckPalindrome(Node *head)
{
    stack<int> s;
    Node *temp = head;

    while (temp)
    {
        s.push(temp->val);
        temp = temp->next;
    }

    temp = head;
    while (temp)
    {
        if (temp->val != s.top())
            return false;
            // cout<<s.top();
        s.pop();
        
        temp = temp->next;
    }
    return true;
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
    int n;
    string s;
    Node *head = nullptr;
    Node *temp = head;

    cout<<"Enter the String: ";
    cin>>s;
    int i=0;
    while (s[i]!='\0')
    {
        Node *newnode = new Node;
        // cin >> ele;
        newnode->val = s[i];
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
        i++;
    }

    // display(head);
    if (CheckPalindrome(head))
        cout << "List Is Palindrome" << endl;
    else
        cout << "List is Not a palindrome" << endl;

    return 0;
}