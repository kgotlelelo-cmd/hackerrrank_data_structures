void printLinkedList(SinglyLinkedListNode *head)
{
	SinglyLinkedListNode *current;
	int count;

	current = head;
	count = 0;
	while(current != NULL)
	{
		count++;
		printf("%d\n",current->data);
		current = current->next;
	}
}
