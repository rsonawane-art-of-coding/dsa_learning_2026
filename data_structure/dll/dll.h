typedef struct dll_node
{
    void *data;
    struct dll_node *next;
    struct dll_node *prev;
} node_t;

typedef struct dll
{
    node_t *head;
} dll_t;

dll_t *create_new_dll();

int dll_insert_node(dll_t *dll, void *data);


