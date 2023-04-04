#include "lists.h"
/**
 * listint_len -function that find the length of a list
 * @h: pointer to the list
 * Return:  number of elements in  `listint_t` list.
 */
size_t listint_len(const listint_t *h)
{
const listint_t *vis = h;
size_t vis1 = 0;

while (vis)
{
vis1++;
vis = vis->next;
}

return (vis1);
}

