#include "lists.h"

/**
 * listint_len - function that find the length of a list
 * @h: pointer to the list
 * Return: the number of elements in `listint_t'
 */
size_t listint_len(const listint_t *h)
{
const listint_t *current = h;
size_t count = 0;

while (current)
{
count++;
current = current->next;
}

return (count);
}


/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the pointer to the list
 * @n: the new node integer value
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));

if (!new)
return (NULL);

new->next = *head;
*head = new;
new->n = n;

return (new);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to the list
 * @idx:  the index of the list where the new node should be added (0-based).
 * @n: the integer value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *current, *new;

if (idx == 0)
return (add_nodeint(head, n));

if (idx > listint_len(*head))
return (NULL);

current = *head;
for (i = 1; i <= idx - 1; i++)
{
current = current->next;
}

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = current->next;
current->next = new;
return (new);
}
