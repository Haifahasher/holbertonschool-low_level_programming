#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
size_t nodes_number = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

nodes_number++;
h = h->next;
}
return (nodes_number);
}
