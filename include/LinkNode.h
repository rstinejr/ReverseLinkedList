#ifndef LINKNODE_H
#define LINKNODE_H

/*
* Single node of a lined list.
*   val - pointer to the node's value.
*   nxt - pointer to next node in list.
*/
typedef struct LinkNode
{
    void            *val;
    struct LinkNode *nxt;
} LinkNode;

#endif
