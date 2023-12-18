#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *temp = *head;
	listint_t *newNode;
	listint_t *previous;
	listint_t *next = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = number;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else if (number <= (*head)->n)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	previous = *head;
	next = previous->next;
	while (next != NULL)
	{
		if (number <= next->n)
		{
			temp = previous->next;
			previous->next = newNode;
			newNode->next = temp;
			return (newNode);
		}
		previous = next;
		next = next->next;
	}
	previous->next = newNode;
	return (newNode);
}
