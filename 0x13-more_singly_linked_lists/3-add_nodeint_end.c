#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the pointer to the list
 * @n: the new node integer value
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *follow;

/* Creation of a new node */

listint_t *new = malloc(sizeof(listint_t));

if (!new)
return (NULL);

new->next = NULL;

/* as it will be at the end */
new->n = n;

if (!(*head))

{
*head = new;
}
else
{
follow = *head;
while (follow->next)
tail = follow->next;
follow->next = new;
}

return (new);
}
