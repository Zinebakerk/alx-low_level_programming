#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the pointer to the list
 * @n: a newer node integer value
 * Return: address of the new element, NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *add = malloc(sizeof(listint_t));

if (!add)
return (NULL);

add->next = *head;
*head = add;
add->n = n;

return (add);
}
