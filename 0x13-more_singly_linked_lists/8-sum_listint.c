#include "lists.h"

/**
 * sum_listint - sum of all the data of  listint_t
 * @head: pointer to the list
 * Return: the sum, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;
const listint_t *vis = head;

while (vis)
{
sum += vis->n;
vis = vis->next;
}

return (sum);
}
