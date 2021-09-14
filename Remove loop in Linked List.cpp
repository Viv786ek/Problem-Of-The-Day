void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        //cout<<fun(head);
        Node *slow=head,*fast=head;
while(fast!=NULL && fast->next!=NULL)
{
slow=slow->next;
fast=fast->next->next;
if(slow==fast) break;
}
if(slow!=fast) return;
if(fast==head)
{
Node *curr=head;
while(curr->next!=head)
curr=curr->next;
curr->next=NULL;
}
else
{
slow=head;
while(slow->next!=fast->next)
{
slow=slow->next;
fast=fast->next;
}
fast->next=NULL;
}
    }
