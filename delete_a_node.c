SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position)
{
    int counter;
    SinglyLinkedListNode *p;
    SinglyLinkedListNode *q;

    p = head;
    counter = 0;
    if(position == 0)
    {
        head = head->next;
    }
    else
    {
        while ((p!=NULL)&&counter<position)
        {
            counter++;
            q = p;
            p = p->next;
        }
        q->next = p->next;
    }
    return head;
}
