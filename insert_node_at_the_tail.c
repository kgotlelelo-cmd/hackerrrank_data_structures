SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data)
{
    SinglyLinkedListNode *p;
    SinglyLinkedListNode *q;
    SinglyLinkedListNode *newnode;
    int counter;
    
    counter = 0;
    newnode = (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    if(!newnode)
    {
        return NULL;
    }

    newnode->data = data;
    p = head;
    if(p==NULL)
    {
        newnode->next = p;
        head=newnode;
    }
    else
    {
        while(p!=NULL)
        {
            counter++;
            q=p;
            p = p->next;
        }
        q->next = newnode;
        newnode->next =p;
    }
    return head;
}
