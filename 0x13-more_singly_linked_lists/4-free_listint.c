#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the list
 */
void free_listint(listint_t *head)
{
listint_t *front_node;

while (head)
{
/* Save the next pointer to a temporary variable */
front_node = head->next;

/* Free the node */
free(head);

/* Set the current pointer to the next node */
head = front_node;
}
}
