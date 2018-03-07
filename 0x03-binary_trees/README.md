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

### 5. Is Root

The [5-binary_tree_is_root.c](5-binary_tree_is_root.c) file has function that
checks if a given node is a root

- Prototype: `int binary_tree_is_root(const binary_tree_t *node);`
- Where `node` is a pointer to the node to check
- It returns 1 if node is a root, and 0 otherwise
- If node is NULL, it returns 0

        $ make

		$ ./5-root
          .-------(098)--.
        (012)--.       (128)--.
             (054)          (402)
        Is 98 a root: 1
        Is 128 a root: 0
        Is 402 a root: 0

### 6. Pre-order traversal

The [6-binary_tree_preorder.c](6-binary_tree_preorder.c) file has a function that
goes through a binary tree using pre-order traversal

- Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse and `func`
is a pointer to a function to call for each node.
- The value in the node is passed as a parameter to this function.

        $ make

		$ ./6-pre
               .-------(098)-------.
          .--(012)--.         .--(402)--.
        (006)     (056)     (256)     (512)
        98
        12
        6
        56
        402
        256
        512

### 7. In-order traversal

The [7-binary_tree_inorder.c](7-binary_tree_inorder.c) file has a function that
goes through a binary tree using in-order traversal

- Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse and func
is a pointer to a function to call for each node.
- The value in the node is passed as a parameter to this function.

        $ make

		$ ./7-in
               .-------(098)-------.
          .--(012)--.         .--(402)--.
        (006)     (056)     (256)     (512)
        6
        12
        56
        98
        256
        402
        512

### 8. Post-order traversal

The [8-binary_tree_postorder.c](8-binary_tree_postorder.c) file has a function that
goes through a binary tree using post-order traversal

- Prototype: void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
- Where `tree` is a pointer to the root node of the tree to traverse and func
is a pointer to a function to call for each node.
- The value in the node is passed as a parameter to this function.

        $ make

		$ ./8-post
               .-------(098)-------.
          .--(012)--.         .--(402)--.
        (006)     (056)     (256)     (512)
        6
        56
        12
        256
        512
        402
        98

### 9. Height

The file [9-binary_tree_height.c](9-binary_tree_height.c) file has a function that
measures the height of a binary tree

- Prototype: `size_t binary_tree_height(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the height of
- If tree is NULL, it returns 0

        $ make

		$ ./9-height
          .-------(098)--.
        (012)--.       (128)--.
             (054)          (402)
        Height from 98: 2
        Height from 128: 1
        Height from 54: 0

### 10. Depth

The [10-binary_tree_depth.c](10-binary_tree_depth.c) file has a function that
measures the depth of a node in a binary tree

- Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);`
- Where `tree` is a pointer to the node to measure the depth of
- If node is NULL, it returns 0

        $ make

		$ ./10-depth
          .-------(098)--.
        (012)--.       (128)--.
             (054)          (402)
        Depth of 98: 0
        Depth of 128: 1
        Depth of 54: 2

### 11. Size
The [11-binary_tree_size.c](11-binary_tree_size.c) file has a function that
measures the size of a binary tree

- Prototype: `size_t binary_tree_size(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the size of

        $ make

		$ ./11-size
          .-------(098)--.
        (012)--.       (128)--.
             (054)          (402)
        Size of 98: 5
        Size of 128: 2
        Size of 54: 1

### 12. Leaves

The [12-binary_tree_leaves.c](12-binary_tree_leaves.c) file has a function that
counts the leaves in a binary tree

- Prototype: size_t binary_tree_leaves(const binary_tree_t *tree);
- Where `tree` is a pointer to the root node of the tree to count the leaves in
- A NULL pointer is not a leaf

        $ make

		$ ./12-leaves
          .-------(098)--.
        (012)--.       (128)--.
             (054)          (402)
        Leaves in 98: 2
        Leaves in 128: 1
        Leaves in 54: 1

### 13. Nodes

The [13-binary_tree_nodes.c](13-binary_tree_nodes.c) file has a function that
counts the nodes with at least 1 child in a binary tree

- Prototype: size_t binary_tree_nodes(const binary_tree_t *tree);
- Where `tree` is a pointer to the root node of the tree to count the nodes in
- A NULL pointer is not a node

        $ make

		$ ./13-nodes
          .-------(098)--.
        (012)--.       (128)--.
             (054)          (402)
        Nodes in 98: 3
        Nodes in 128: 1
        Nodes in 54: 0

### 14. Balance Factor

The [14-binary_tree_balance.c](14-binary_tree_balance.c) file has a function that
write a function that measures the balance factor of a binary tree

- Prototype: `int binary_tree_balance(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the balance factor of
- If tree is NULL it returns 0

        $ make

		$ ./14-balance
                              .-------(098)--.
                    .-------(045)--.       (128)--.
               .--(012)--.       (050)          (402)
          .--(010)     (054)
        (008)
        Balance of 98: +2
        Balance of 128: -1
        Balance of 54: +0

### 15. Is Full

The [15-binary_tree_is_full.c](15-binary_tree_is_full.c) file has a function that
checks if a binary tree is full

- Prototype: `int binary_tree_is_full(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to check
- If tree is NULL, your it returns 0

        $ make

		$ ./15-full
               .-------(098)--.
          .--(012)--.       (128)--.
        (010)     (054)          (402)
        Is 98 full: 0
        Is 12 full: 1
        Is 128 full: 0

### 16. Is Perfect

The [16-binary_tree_is_perfect.c](16-binary_tree_is_perfect.c) file has a function that
checks if a binary tree is perfect

- Prototype: `int binary_tree_is_perfect(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to check
- If tree is NULL, it returns 0

        $ make

		./16-perfect 
               .-------(098)-------.
          .--(012)--.         .--(128)--.
        (010)     (054)     (010)     (402)
        Perfect: 1
        
               .-------(098)-------.
          .--(012)--.         .--(128)-------.
        (010)     (054)     (010)       .--(402)
                                      (010)
        Perfect: 0
        
               .-------(098)-------.
          .--(012)--.         .--(128)-------.
        (010)     (054)     (010)       .--(402)--.
                                      (010)     (010)
        Perfect: 0

### 17. Sibling

The [17-binary_tree_sibling.c](17-binary_tree_sibling.c) has a function that
finds the sibling of a node

- Prototype: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`
- Where `node` is a pointer to the node to find the sibling of
- It returns a pointer to the sibling node
- If node has no sibling, it returns NULL

        $ make

		$ ./17-sibling
               .-------(098)-------.
          .--(012)--.         .--(128)-------.
        (010)     (054)     (110)       .--(402)--.
                                      (200)     (512)
        Sibling of 12: 128
        Sibling of 110: 402
        Sibling of 54: 10
        Sibling of 98: (nil)

