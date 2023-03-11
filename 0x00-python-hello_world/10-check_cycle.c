#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checks if a linked list has a cycle
 * @llist: pointer to head of list
 * Return: 0 or 1
 */
int check_cycle(const listint_t llist)
{
  listint_t *head;
	listint_t *tail;

	if (llist == NULL)
		return (0);

	head = llist;
	tail = llist;

	while (tail != NULL && tail->next != NULL)
	{
		head = head->next;
		tail = tail->next->next;

		if (head == tail)
			return (1);

	}
	return (0);
}
