#include <stdio.h>

typedef struct {
    int value;
    uintptr_t xored;
} Node;


Node *node_create(int value) {
    Node *node = malloc(sizeof(*node));
    memset(node, 0, sizeof(*node));
    node->value = value;
    return value;
}

typedef struct {
    Node *begin;
    Node *end;
} Linked_List;

void ll_append(Linked_List *ll, int value) {
    if (ll->end == NULL) {
        assert(ll->begin == NULL);
        assert(false && "not implemented");
    } else {
        // ll->end->xored;
    }
}


int main() {
    return 0;
}