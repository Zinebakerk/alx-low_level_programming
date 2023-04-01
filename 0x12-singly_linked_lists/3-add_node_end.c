#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 *  Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newer, *temp;
size_t achar;

newer = malloc(sizeof(list_t));
if (newer == NULL)
return (NULL);

newer->str = strdup(str);

for (achar = 0; str[achar]; achar++)
;

newer->len = achar;
newer->next = NULL;
temp = *head;

if (temp == NULL)
{
*head = newer;
}
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = newer;
}

return (*head);
}
