#include "lists.h"

/**
* sum_listint - sum up all the data inside the ll.
* @head: the pointer.
* Return: the sum.
*/

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum;


	if (!head)
		return (0);

	sum = 0;
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
