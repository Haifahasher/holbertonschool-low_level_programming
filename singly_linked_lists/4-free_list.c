#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head->next;
free(head->str);  /* Free the duplicated string */
free(head);       /* Free the node itself */
head = temp;
}
}
