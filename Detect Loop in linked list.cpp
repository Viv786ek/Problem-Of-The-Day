bool detectLoop(Node* head)
    {
        // your code here
        while(head->next!=NULL)
{ //data.push_back(head->data);
head->data=NULL;
head=head->next;
if(head->data==NULL)
return 1;
}

return 0;

    }
