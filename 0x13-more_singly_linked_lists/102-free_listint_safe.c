#include "lists.h"

/**
 * detect_loop - Function that detects if is a loop
 * @h: Head of the linked list
 * Return: Number of length if is true or 0 if is false
 */
int detect_loop(listint_t *h)
{
	listint_t *slow, *fast;
	int i;

	slow = h, fast = h;

	for (i = 1; slow && fast && fast->next; i++)
	{
		slow = slow->next, fast = fast->next->next;

		if (slow == fast)
			return (i);
	}

	return (0);
}

/**
 * remove_loop - Function that removes loop in a linked list
 * @h: Header of the linked list
 * @n: lenth of the loop
 */
void remove_loop(listint_t **h, int n)
{
	listint_t *ptr1, *ptr2;

	ptr1 = *h, ptr2 = *h;

	for (; n > 0; n--)
		ptr1 = ptr1->next;

	while (1)
	{
		ptr1 = ptr1->next, ptr2 = ptr2->next;

		if (ptr1->next == ptr2->next)
		{
			ptr1->next = NULL;
			return;
		}
	}
}

/**
 * free_listint_safe - Function that frees a linked list
 * @h: Head of the linked list
 * Return: The size of the list that was free
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *t;
	int n;

	if (h == NULL || *h == NULL)
		printf("0\n(nil)\n"), exit(98);

	n = detect_loop(*h);

	if (n != 0)
		remove_loop(h, n);

	for (n = 0; *h; n++)
		t = *h, *h = (*h)->next, free(t);

	*h = NULL;

	return (n);
}
