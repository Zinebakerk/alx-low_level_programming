#include "lists.h"
#include <stdio.h>

/**
 * length - function that finds the length of the list
 * @first: pointer to the first node
 * @last: pointer to the last node
 * Return: the number of nodes between first and last
 */
size_t length(const listint_t *first, const listint_t *last)
{
int counter = 0;
const listint_t *vis = first;

while (vis != last)
{
vis = vis->next;
counter++;
}

return (counter + 1);
}

/**
 * print_listint_safe -function that  prints a listint_t
 * @head: pointer to the list
 * Return:  number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t counter = 0, previous_length = 0;
const listint_t *first, *last;

first = last = head;
while (last && length(first, last) > previous_length)
{
previous_length = length(first, last);

printf("[%p] %i\n", (void *)last, last->n);
counter++;
last = last->next;
}

if (last)
{
printf("-> [%p] %i\n", (void *)last, last->n);
}

return (counter);
}
