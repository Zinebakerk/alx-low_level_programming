#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
list_t *instant;

while ((instant = head) != NULL)
{
head = head->next;
free(instant->str);
free(instant);
}
}

