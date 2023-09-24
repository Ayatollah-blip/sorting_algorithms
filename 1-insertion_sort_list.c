#include "sort.h"

/**
* insertion_sort_list - function that sorts in a list
* Description : sorting algorithm used is insertion algorithm
*
* @list : list structure to be sorted
**/

void insertion_sort_list(listint_t **list)
{
	listint_t *_cur;


	if (*list == NULL || (*list)->next == NULL)
		return;
	_cur = (*list)->next;
	while (_cur != NULL)
	{
		while (_cur->prev != NULL && _cur->prev->n > _cur->n)
		{
			_cur = swap_node(_cur, list);
			print_list(*list);
		}
		_cur = _cur->next;
	}
}


/**
 *swap_node - swap a node for his previous one
 *@node: node
 *@list: node list
 *Return: return a pointer to a node which was enter it
 */

listint_t *swap_node(listint_t *node, listint_t **list)
{
listint_t *back = node->prev, *current = node;

back->next = current->next;
if (current->next)
	current->next->prev = back;
current->next = back;
current->prev = back->prev;
back->prev = current;
if (current->prev)
	current->prev->next = current;
else
	*list = current;

return (current);

}
