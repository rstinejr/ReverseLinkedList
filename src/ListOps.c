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

void free_node(LinkNode *node) 
{
	free(node);
}

