#ifndef LISTOPS_H
#define LISTOPS_H

/*
* Some utility functions for creating and managing a linked list of ListNode.
*/

#include "LinkNode.h"

LinkNode *create_node(void *val);

void      free_node(LinkNode *node);

#endif

