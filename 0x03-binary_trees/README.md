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

### 3. Delete

The [3-binary_tree_delete.c](3-binary_tree_delete.c) file has a function that
deletes(deallocate) an entire binary tree from

- Prototype: `void binary_tree_delete(binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to delete

        $ make

		$ valgrind ./3-del
        ==13264== Memcheck, a memory error detector
        ==13264== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
        ==13264== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
        ==13264== Command: ./3-del
        ==13264==
          .-------(098)--.
        (012)--.       (128)--.
             (054)          (402)
        ==13264==
        ==13264== HEAP SUMMARY:
        ==13264==     in use at exit: 0 bytes in 0 blocks
        ==13264==   total heap usage: 9 allocs, 9 frees, 949 bytes allocated
        ==13264==
        ==13264== All heap blocks were freed -- no leaks are possible
        ==13264==
        ==13264== For counts of detected and suppressed errors, rerun with: -v
        ==13264== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

### 4. Is Leaf

The [4-binary_tree_is_leaf.c](4-binary_tree_is_leaf.c) file has function that
that checks if a node is a leaf

- Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`
- Where `node` is a pointer to the node to check
- It returns 1 if node is a leaf, and 0 otherwise
- If node is NULL, it returns 0

        $ make

		./4-leaf
          .-------(098)--.
        (012)--.       (128)--.
             (054)          (402)
        Is 98 a leaf: 0
        Is 128 a leaf: 0
        Is 402 a leaf: 1
