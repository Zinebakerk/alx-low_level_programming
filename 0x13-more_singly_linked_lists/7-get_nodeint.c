#include "lists.h"

/**
* get_nodeint_at_index - gets the nth node of a listint_t .
* @head: pointer to the list
* @index: the index of the desired node
* Return: pointer to the desired node, NULL if not exists
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *vis;
unsigned int i;

vis = head;
for (i = 0; vis && i < index; i++)
{
vis = vis->next;
}

return (vis);
}

