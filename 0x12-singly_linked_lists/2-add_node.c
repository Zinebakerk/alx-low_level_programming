#include "lists.h"
/* add_node - adds a new node at the beginning  of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: actula address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newer;
size_t nchar;

newer = malloc(sizeof(list_t));
if (newer == NULL)
return (NULL);

newer->str = strdup(str);

for (nchar = 0; str[nchar]; nchar++)
;

newer->len = nchar;
newer->next = *head;
*head = newer;

return (*head);
}
