#include<stdio.h>
#include<stdlib.h>
#include "dll.h"

/* 
 * Function to create doubly link list
 */

dll_t* create_dll()
{
    /* This creates as Head of doubly link list */
    dll_t *dll = calloc(1, sizeof(dll_t));
    
    if (dll)
        dll->head = NULL;
    
    return dll;
}


int dll_insert_node(dll_t* dll, void* data)
{   
    
    if (!dll && !data)
        return -1;

    node_t *new_node = calloc(1, sizeof(node_t));

    /* Create new dll node and link user data to it */
    if(new_node) {
        new_node->next = NULL;
        new_node->prev = NULL;
        new_node->data = data;
    }
    
    /* List is empty and this is first node we are inserting */    
    if(!dll->head) {
        dll->head = new_node;
        return 0;
    }

    new_node->next = dll->head; // First node will become second node
    dll->head->prev = new_node; // Second node previous is new node
    dll->head = new_node; // Now  head is pointing to new node.

    return 0;
}
