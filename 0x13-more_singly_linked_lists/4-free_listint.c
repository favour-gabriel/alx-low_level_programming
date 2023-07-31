#include "lists.h"
/**
 * free_listint - Linked lists are been released.
 *@head: Freed listint_t.
 */
void free_listint(listint_t *head)
{
listint_t *y;

while (head)
{
y = head->next;
free(head);
head = y;
}
}
