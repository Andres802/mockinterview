#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * check_cycle - check if  it is cycle in the code
 * 
 *
 * Return: 0 if it is a cycle or 1 if not
 */

int check_cycle(listint_t *list)
{
    listint_t *current, *checknode;

    if (list == NULL || list->next == NULL)
        return (0);
    
    current = list;
    checknode = current->next;

    while (current != NULL && checknode->next != NULL && checknode->next->next != NULL)
    {
		if (current == checknode)
			return (1);
		current = current->next;
		checknode = checknode->next->next;
	}
	return (0);

}