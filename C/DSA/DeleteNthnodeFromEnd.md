Use Slow and Fast pointers 
//for Palindrome problem 
Use Slow and Fast pointers find the middle and reverse the half of the list and compare both list form starting .
a->b->c->d->c->b->a->null;
reverse the list from d->next;

//Merge two sorted linked lists
time complexity for sorting is alway greater than o(nlog(n));
Node * Merge(Node *head1,Node *head2){
    if(!head1) return head2;
    if(!head2) return head1;
    Node *p1=head1;
    Node *p2=head2;
    Node *head3=nullptr;
    Node *temp;
    while(p1&& p2){
        if(p1->val<=p2->val)
        {
                temp=p1;
                p1=p1->next;
                


        }



    }
}