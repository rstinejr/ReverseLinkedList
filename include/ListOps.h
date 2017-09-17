#ifndef LISTOPS_H
#define LISTOPS_H

/*
* Some utility functions for creating and managing a linked list of ListNode.
*/

#include "LinkNode.h"

LinkNode *create_node(void *val);

LinkNode *reverse_list(LinkNode *head);
void      free_list   (LinkNode *head);

LinkNode *append_node(LinkNode *first, LinkNode *second);
void      free_node(LinkNode *node);

#endif

