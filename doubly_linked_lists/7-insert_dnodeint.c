#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added (starting from 0)
 * @n: value to insert in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current = *h, *new_node;
unsigned int i = 0;

if (idx == 0)
return (add_dnodeint(h, n));

while (current != NULL && i < idx - 1)
{
current = current->next;
i++;
}

if (current == NULL || (current->next == NULL && i + 1 != idx))
return (NULL);

if (current->next == NULL)
return (add_dnodeint_end(h, n));

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = current;
new_node->next = current->next;

current->next->prev = new_node;
current->next = new_node;

return (new_node);
}
