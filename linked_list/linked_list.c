#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

node_t *ll_create_node(int value)
{
    node_t *node = malloc(sizeof(node_t));
    node->value = value;
    node->next = NULL;
    return node;
}

node_t *ll_insert_at_head(node_t **head, node_t *node)
{
    node->next = *head;
    *head = node;
    return node;
}

void ll_insert_after_node(node_t *node, node_t *new_node)
{
    new_node->next = node->next;
    node->next = new_node;
}

node_t *ll_find_node(node_t *head, int value)
{
    node_t *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->value == value)
        {
            return tmp;
        }

        tmp = tmp->next;
    }
    return NULL;
}

void ll_display(node_t *head)
{
    node_t *tmp = head;
    while (tmp != NULL)
    {
        printf("%d", tmp->value);
        tmp = tmp->next;
        if (tmp != NULL)
        {
            printf(" -> ");
        }
    }

    printf("\n");
}