/*
* Some utility functions for creating and managing a linked list of ListNode.
*/

#include <ListOps.h>

#include <LinkNode.h>
#include <stdlib.h>

LinkNode *create_node(void *val)
{
	LinkNode *node = calloc(1, sizeof(LinkNode));
    node->val = val;
    node->nxt = NULL;

    return node;
}

LinkNode *append_node(LinkNode *first, LinkNode *second)
{
	first->nxt = second;
	return second;
}	
	
void free_list(LinkNode *head)
{
	while (head != NULL)
	{
		LinkNode *nxt = head->nxt;
		free_node(head);
		head = nxt;
	}
}
	
/*
* This linked list does NOT take ownership of the pointer to value. If the value has been allocated,
* it is the caller's responsibility to free it.
*/
void free_node(LinkNode *node) 
{
	free(node);
}

