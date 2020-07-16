SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position)
{
    int counter;
    SinglyLinkedListNode *p;
    SinglyLinkedListNode *q;
    SinglyLinkedListNode *newnode;

    counter = 0;
    newnode = (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    if(!newnode)
    {
        return NULL;
    }
    newnode->data = data;
    p = head;

    if(position ==0)
    {
        newnode->next =p;
        head = newnode;
    }
    else
    {
        while((p!=NULL)&&(counter<position))
        {
            q = p;
            p = p->next;
            counter++;
        }
        q->next = newnode;
        newnode->next = p;
    }
    return head;
}
