#include "lists.h"
#include <stdio.h>
/**
 * print_listint -function that prints all the elements of a `listint_t` list.
 * @h: a pointer to the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *vis = h;
size_t vis1 = 0;

while (vis)
{
printf("%i\n", vis->n);
vis1++;
vis = vis->next;
}

return (vis1);
}
