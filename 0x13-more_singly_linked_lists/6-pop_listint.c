#include "lists.h"

/**
 * pop_listint -funtion that deletes the head node of a listint_t
 * @head: pointer to the pointer to the list
 * Return: the head node’s data (n), 0 if list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *node_front;
int n;

if (!(*head))
return (0);

n = (*head)->n;
node_front = (*head)->next;

free(*head);
*head = node_front;
return (n);
}
