#include "lists.h"

/**
 * listint_len - find the length of a list
 * @h: pointer to the list
 * Return: the number of elements in a linked `listint_t` list.
 */
size_t listint_len(const listint_t *h)
{
const listint_t *vis = h;
size_t count = 0;

while (vis)
{
count++;
vis = vis->next;
}

return (count);
}

/**
 * delete_nodeint_at_index -  deletes the node at index `index`
 * of a listint_t linked list.
 * @head: pointer to pointer to the list
 * @index: the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *vis, *tmp;
unsigned int i;

if (index >= listint_len(*head))
return (-1);

if (index == 0)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
return (1);
}

vis = *head;
for (i = 0; i < index - 1; i++)
{
vis = vis->next;
}

tmp = vis->next;
vis->next = (vis->next)->next;
free(tmp);
return (1);
}

