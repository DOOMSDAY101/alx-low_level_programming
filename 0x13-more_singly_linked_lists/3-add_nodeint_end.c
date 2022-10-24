#include "lists.h"
/**
 * add_nodeint_end - Entry
 * @head: head
 * @n: value
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *old;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
old = *head;
while (old->next != NULL)
old = old->next;
old->next = new;
return (new);
}
