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

### 1. Insert Left

The [1-binary_tree_insert_left.c](1-binary_tree_insert_left.c) file has a
function that inserts a node as the left-child of another node

- Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
- Where `parent` is a pointer to the node to insert the left-child in and `value` is the value to store in the new node
- This function returns a pointer to the created node, or NULL on failure
- If parent already has a left-child, the new node takes its place, and the old left-child is set as the left-child of the new node.

    $ make

    $ ./1-left
      .--(098)--.
    (012)     (402)

           .--(098)-------.
      .--(054)       .--(402)
    (012)          (128)
    $

### 2. Insert Right

The [2-binary_tree_insert_right.c](2-binary_tree_insert_right.c) has a function
that inserts a node as the right-child of another node

- Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
- Where parent is a pointer to the node to insert the right-child in and value
is the value to store in the new node
- It returns a pointer to the created node, or NULL on failure
- If parent already has a right-child, the new node takes its place, and the old right-child is set as the right-child of the new node.

    $ make

	$ ./2-right
    	  .--(098)--.
    (012)     (402)

      .-------(098)--.
    (012)--.       (128)--.
         (054)          (402)
    $
