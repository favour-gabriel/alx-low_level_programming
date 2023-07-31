#include "lists.h"
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - A unique number of counts nodes.
 * @head: A listint_t checks the head pointer.
 * Return: Not lst loop -0.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ti, *as;
	size_t no = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	ti = head->next;
	as = (head->next)->next;

	while (as)
	{
		if (ti == as)
		{
			ti = head;
			while (ti != as)
			{
				no++;
				ti = ti->next;
				as = as->next;
			}
			ti = ti->next;
			while (ti != as)
			{
			no++;
		ti = ti->next;
			}
		return (no);
		}
	ti = ti->next;
as = (as->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - The printed listint_t.
 * @head: The listint_t list head pointer.
 * Return: The list of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t no, in = 0;

	no = looped_listint_len(head);

	if (no == 0)
	{
		for (; head != NULL; no++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (in = 0; in < no; in++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (no);
}
