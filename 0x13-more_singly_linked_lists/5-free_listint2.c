#include "lists.h"

/** 
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the pointer to the list
 */
void free_listint2(listint_t **head)
{
listint_t *front_node, *vis;

if (head)
{

vis = *head;
while (vis)
{
front_node = vis->next;
free(front_node);
vis = front_node;
}
*head = NULL;
}
}

