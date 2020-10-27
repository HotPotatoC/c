#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

typedef struct node
{
    int value;
    struct node *next;
} node_t;

/** Creates a new node in the linked list */
node_t *ll_create_node(int value);

/** Inserting a node into the head of the linked list */
node_t *ll_insert_at_head(node_t **head, node_t *node);

/** Inserting a new node after the given node */
void ll_insert_after_node(node_t *node, node_t *new_node);

/** Finds a node in the linked list */
node_t *ll_find_node(node_t *head, int value);

/** Displays the value of the nodes in the linked list */
void ll_display(node_t *head);

#endif