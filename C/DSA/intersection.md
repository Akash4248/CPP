
``` C
Node insert(Node *head,Node *head2){
    if(head1==NULL || head2==NULL)
    {
        return -1;
    }
 Node*   p1=head;
 Node*   p2=head;
 while(p1!=p2){
    p1=(p1!=NULL)? head2:p1->head2;
    p2=(p2!=NULL)? head1:p2->head1;
 }

 return (p1->NULL)? p1->data :-1;
}
```