# 0x03. C - Binary trees

System programming & Algorithm ― Data structures and Algorithms

### 0. Task 0 - New Node

The [0-binary_tree_node.c](0-binary_tree_node.c) file has a function that creates
a binary tree node

- Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
- Where `parent` is a pointer to the parent node of the node to create and value
is the value to put in the new node
- When created, a node does not have any child
- The function returns a pointer to the new node, or NULL on failure

    $ make

    $ ./0-node
           .-------(098)-------.
      .--(012)--.         .--(402)--.
    (006)     (016)     (256)     (512)
    $

