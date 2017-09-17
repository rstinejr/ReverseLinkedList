/*
* Test driver for "reverse" - implement, reverse a lined list.
*/

#include <LinkNode.h>
#include <ListOps.h>

#include <stdio.h>

int main(int argc, char *argv[])
{
	LinkNode *head = create_node((void *) 1);
	
	free_node(head);
	
	printf("Done.\n");

	return 0;
}
