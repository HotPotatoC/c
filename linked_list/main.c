#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int main(void)
{
    node_t *head = NULL;
    node_t *tmp;

    for (int i = 0; i <= 15; i++)
    {
        tmp = ll_create_node(i);
        ll_insert_at_head(&head, tmp);
    }

    tmp = ll_find_node(head, 10);
    if (tmp != NULL)
    {
        printf("Found node with value %d\n", tmp->value);
    }

    // Inserts a new node after the node with the value of "10"
    ll_insert_after_node(tmp, ll_create_node(50));

    ll_display(head);

    return 0;
}