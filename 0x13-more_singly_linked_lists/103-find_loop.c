#include "lists.h"

/**
 * find_listint_loop - find loop
 * @head: pointer
 *
 * Return: Node address
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ba, *ca;

	ba = ca = head;
	while (ba && ca && ca->next)
	{

		ba = ba->next;
		ca = ca->next->next;
		if (ba == ca)
		{
			ba = head;
			break;
		}
	}
	if (!ba || !ca || !ca->next)
		return (NULL);
	while (ba != ca)
	{
		ba = ba->next;
		ca = ca->next;
	}
	return (ca);
}
