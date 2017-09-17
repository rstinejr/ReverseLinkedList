/*
* Test driver for "reverse" - implement, reverse a lined list.
*/

#include <LinkNode.h>
#include <ListOps.h>

#include <assert.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	LinkNode *head = create_node((void *) 1);
	LinkNode *n2   = create_node((void *) 2);
	LinkNode *n3   = create_node((void *) 3);
    LinkNode *n4   = create_node((void *) 4);
	
	LinkNode *p = append_node(head, n2);
	assert(p == n2);

	p = append_node(p, n3);
	assert(p == n3);

	p = append_node(p, n4);
	assert(p == n4);
	
	free_list(head);

	printf("Done.\n");

	return 0;
}
