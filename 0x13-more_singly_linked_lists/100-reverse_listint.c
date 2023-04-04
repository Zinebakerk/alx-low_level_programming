#include "lists.h"

/**
 * reverse_listint - function that  reverses listint_t
 * @head: pointer to pointer to the list
 * Return: pointer to  new reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prevNode, *curNode;

if (!(*head))
return (NULL);

prevNode = (*head);
*head = (*head)->next;
curNode = *head;

prevNode->next = NULL;

while (*head)
{
*head = (*head)->next;
curNode->next = prevNode;
prevNode = curNode;
curNode = (*head);
}
*head = prevNode;
return (*head);
}
