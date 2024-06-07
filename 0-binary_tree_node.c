#include <stdlib.h>

/* Structure for a binary tree node */
typedef struct binary_tree_s {
    int value;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function to create a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL) {
        return NULL;  // Return NULL if memory allocation fails
    }

    // Initialize the new node
    new_node->value = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

