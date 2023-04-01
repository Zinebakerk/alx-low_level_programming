#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elements of `list_t` list
 * @h: head of singly list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *element;
size_t a;

a = 0;
element = h;
while (element != NULL)
{
printf("[%d] %s\n", element->len, element->str);
element = element->next;
a++;
}

return (a);
}
