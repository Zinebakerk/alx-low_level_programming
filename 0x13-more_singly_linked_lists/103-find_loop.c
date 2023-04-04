#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list by storing the length
 * @head: pointer to the list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *S, *F;

S = F = head;

while (S && F && F->next)
{
S = S->next;
F = F->next->next;
if (S == F)
{
S = head;
while (S != F)
{
S = S->next;
F = F->next;
}
return (S);
}
}

return (NULL);
}
