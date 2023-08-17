#include "lists.h"

/**
 * sum_dlistint - calc the sum of the data of a dll
 * @head: pointer to head of the dll
 * Return: the sum
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum;

	if (!head)
		return (0);

	tmp = head;
	sum = 0;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
