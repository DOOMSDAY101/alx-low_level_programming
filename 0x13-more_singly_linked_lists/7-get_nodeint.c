#include "lists.h"
/**
 * get_nodeint_at_index - Entry Point
 * @head: head
 * @index: index
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int num = 0;
while (num < index)
{
if (head->next == NULL)
{
return (NULL);
}
else
{
num++;
head = head->next;
}
}
return (head);
}
