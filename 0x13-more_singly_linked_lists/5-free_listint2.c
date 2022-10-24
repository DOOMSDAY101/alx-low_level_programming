#include "lists.h"
/**
 * free_listint2 - frees a list and sets the heaed to NULL
 * @head: pointer to the begining of the string
 */
void free_listint2(listint_t **head)
{
listint_t *present, *next;
if (head == NULL)
return;
present = *head;
while present)
{
next = present->next;
free(present);
present = next;
}
*head = NULL;
}
