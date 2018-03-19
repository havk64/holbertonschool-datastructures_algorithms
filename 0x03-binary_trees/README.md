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

### 18. Uncle

The [18-binary_tree_uncle.c](18-binary_tree_uncle.c) file has a function that
finds the uncle of a node

- Prototype: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
- Where `node` is a pointer to the node to find the uncle of
- It returns a pointer to the uncle node
- If node has no uncle, it returns NULL

        $ make
		
		$ ./18-uncle
               .-------(098)-------.
          .--(012)--.         .--(128)-------.
        (010)     (054)     (110)       .--(402)--.
                                      (200)     (512)
        Uncle of 110: 12
        Uncle of 54: 128
        Uncle of 12: (nil)

### 19. Lowest common ancestor 

The [100-binary_trees_ancestor.c](100-binary_trees_ancestor.c) file has a function that
finds the lowest common ancestor of two nodes

- Prototype: `binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);`
- Where `first` is a pointer to the first node and `second` is a pointer to the second node
- It returns a pointer to the lowest common ancestor node of the two given nodes
- If no common ancestor is found, it returns NULL

        $ make

		$ ./100-ancestor
               .-------(098)-------.
          .--(012)--.         .--(402)-------.
        (010)     (054)     (045)       .--(128)--.
                                      (092)     (065)
        Ancestor of [12] & [402]: 98
        Ancestor of [45] & [65]: 402
        Ancestor of [128] & [65]: 128

### 20. Level-order traversal

The [Level-order traversal](Level-order traversal) file that has a function that
goes through a binary tree using level-order traversal

- Prototype: `void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse and `func`
is a pointer to a function to call for each node.
- The value in the node is passed as a parameter to this function.

### 21. Is Complete

The [102-binary_tree_is_complete.c](102-binary_tree_is_complete.c) file that has a function that
checks if a binary tree is complete

- Prototype: `int binary_tree_is_complete(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to check
- If tree is `NULL`, it returns 0

        $ make

		./102-complete
               .-------(098)--.
          .--(012)--.       (128)--.
        (010)     (054)          (402)
        Is 98 complete: 0
        Is 12 complete: 1
               .-------(098)-------.
          .--(012)--.         .--(128)--.
        (010)     (054)     (112)     (402)
        Is 98 complete: 1
                    .-------(098)-------.
               .--(012)--.         .--(128)--.
          .--(010)     (054)     (112)     (402)
        (008)
        Is 98 complete: 1
                    .------------(098)-------.
               .--(012)-------.         .--(128)--.
          .--(010)       .--(054)     (112)     (402)
        (008)          (023)
        Is 98 complete: 0

### 22. Rotate left 

The [103-binary_tree_rotate_left.c](103-binary_tree_rotate_left.c) file has a function that
performs a left-rotation on a binary tree

- Prototype: `binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to rotate
- It returns a pointer to the new root node of the tree once rotated

        $ make

		$ ./103-rotl
        (098)--.
             (128)--.
                  (402)
        Rotate-left 98
          .--(128)--.
        (098)     (402)
        
          .--(128)-------.
        (098)       .--(402)--.
                  (420)     (450)
        Rotate-left 128
               .-------(402)--.
          .--(128)--.       (450)
        (098)     (420)

### 23. Rotate right

The [104-binary_tree_rotate_right.c](104-binary_tree_rotate_right.c) file has a function that
performs a right-rotation on a binary tree

- Prototype: `binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to rotate
- It returns a pointer to the new root node of the tree once rotated


        $ make

		$ ./104-rotr
               .--(098)
          .--(064)
        (032)
        Rotate-right 98
          .--(064)--.
        (032)     (098)
        
               .-------(064)--.
          .--(032)--.       (098)
        (020)     (056)
        Rotate-right 64
          .--(032)-------.
        (020)       .--(064)--.
                  (056)     (098)

### 24. Is BST

The [110-binary_tree_is_bst.c](110-binary_tree_is_bst.c) file has a function that
checks if a binary tree is a valid [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)

- Prototype: `int binary_tree_is_bst(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to check
- It returns 1 if tree is a valid `BST`, and 0 otherwise
- If tree is NULL, it returns 0

Properties of a Binary Search Tree:

- The left subtree of a node contains only nodes with values less than the node’s value
- The right subtree of a node contains only nodes with values greater than the node’s value
- The left and right subtree each must also be a binary search tree
- There's no duplicate values

        $ make

		$ ./110-is_bst
               .-------(098)--.
          .--(012)--.       (128)--.
        (010)     (054)          (402)
        Is 98 bst: 1
        Is 12 bst: 1
               .-------(098)-------.
          .--(012)--.         .--(128)--.
        (010)     (054)     (097)     (402)
        Is 98 bst: 0

### 25. BST - Insert 

The [111-bst_insert.c](111-bst_insert.c) file has a function that
inserts a value in a Binary Search Tree

- Prototype: bst_t *bst_insert(bst_t **tree, int value);
- Where `tree` is a double pointer to the root node of the BST to insert the value
in and `value` is the value to store in the node to be inserted
- It returns a pointer to the created node, or NULL on failure
- If the address stored in tree is NULL, the created node becomes the root node.
- If the value is already present in the tree, it is ignored

        $ make

		$ ./111-bst_insert
        Inserted: 98
        Inserted: 402
        Inserted: 12
        Inserted: 46
        Inserted: 128
        Inserted: 256
        Inserted: 512
        Inserted: 1
        Node should be nil -> (nil)
               .-------(098)------------.
          .--(012)--.         .-------(402)--.
        (001)     (046)     (128)--.       (512)
                                 (256)

### 26. BST - Array to BST 

The [112-array_to_bst.c](112-array_to_bst.c) file has a function that
builds a Binary Search Tree from an array

- Prototype: bst_t *array_to_bst(int *array, size_t size);
- Where `array` is a pointer to the first element of the array to be converted and
`size` is the number of element in the array
- it returns a pointer to the root node of the created BST, or NULL on failure
- If a value of the array is already present in the tree, this value is ignored

        $ make

		$ ./112-bst_array
                                             .------------(079)-------.
                         .-----------------(047)-------.         .--(087)--.
               .-------(021)-------.              .--(068)     (084)     (091)-------.
          .--(002)--.         .--(032)--.       (062)                           .--(098)
        (001)     (020)     (022)     (034)

### 27. BST - Search 

The [113-bst_search.c](113-bst_search.c) file has a function that
removes a node from a Binary Search Tree

- Prototype: bst_t *bst_search(const bst_t *tree, int value);
- Where `tree` is a pointer to the root node of the BST to search
and `value` is the value to look for
- It returns a pointer to the node containing a value equals to `value`
- If `tree` is NULL or if nothing is found, it returns NULL

        $ make

		$ ./113-bst_search 
                                             .------------(079)-------.
                         .-----------------(047)-------.         .--(087)--.
               .-------(021)-------.              .--(068)     (084)     (091)-------.
          .--(002)--.         .--(032)--.       (062)                           .--(098)
        (001)     (020)     (022)     (034)                                   (095)
        Found: 32
          .--(032)--.
        (022)     (034)
        Node should be nil -> (nil)

### 28. BST - Remove

The [114-bst_remove.c](114-bst_remove.c) file has a function that
removes a node from a Binary Search Tree

- Prototype: `bst_t *bst_remove(bst_t *root, int value);`
- Where `root` is a pointer to the root node of the tree to remove a node of
and `value` is the value to look for
- Once located, the node containing a value equals to value is removed and freed
- If the node to be deleted has two children, it is replaced with its first
in-order successor (not predecessor)
- It returns a pointer to the new root node of the tree after removing the
desired value

        $ make

		$ ./114-bst_rm
        ==14720== Memcheck, a memory error detector
        ==14720== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
        ==14720== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
        ==14720== Command: ./114-bst_rm
        ==14720==
                                             .------------(079)-------.
                         .-----------------(047)-------.         .--(087)--.
               .-------(021)-------.              .--(068)     (084)     (091)-------.
          .--(002)--.         .--(032)--.       (062)                           .--(098)
        (001)     (020)     (022)     (034)                                   (095)
        Removed 79...
                                             .------------(084)--.
                         .-----------------(047)-------.       (087)--.
               .-------(021)-------.              .--(068)          (091)-------.
          .--(002)--.         .--(032)--.       (062)                      .--(098)
        (001)     (020)     (022)     (034)                              (095)
        Removed 21...
                                        .------------(084)--.
                         .------------(047)-------.       (087)--.
               .-------(022)--.              .--(068)          (091)-------.
          .--(002)--.       (032)--.       (062)                      .--(098)
        (001)     (020)          (034)                              (095)
        Removed 68...
                                        .-------(084)--.
                         .------------(047)--.       (087)--.
               .-------(022)--.            (062)          (091)-------.
          .--(002)--.       (032)--.                             .--(098)
        (001)     (020)          (034)                         (095)
        ==14720==
        ==14720== HEAP SUMMARY:
        ==14720==     in use at exit: 0 bytes in 0 blocks
        ==14720==   total heap usage: 40 allocs, 40 frees, 5,772 bytes allocated
        ==14720==
        ==14720== All heap blocks were freed -- no leaks are possible
        ==14720==
        ==14720== For counts of detected and suppressed errors, rerun with: -v
        ==14720== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

### 29. Big O #BST 

The [115-O](115-O) file has the answer to the question:

> What are the average time complexities of those operations on a Binary Search Tree (one answer per line):

- Inserting the value n
- Removing the node with the value n
- Searching for a node in a BST of size n

### 30. AVL

The [120-binary_tree_is_avl.c](120-binary_tree_is_avl.c) file has a function that
checks if a binary tree is a valid [AVL Tree](https://en.wikipedia.org/wiki/AVL_tree)

- Prototype: `int binary_tree_is_avl(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to check
- It returns 1 if tree is a valid `AVL Tree`, and 0 otherwise
- If tree is NULL, it returns 0

Properties of an `AVL Tree`:

- An `AVL Tree` is a `BST`
- The difference between heights of left and right subtrees cannot be more than one
- The left and right subtree each must also be a binary search tree

        $ make

		$ ./120-is_avl
               .-------(098)--.
          .--(012)--.       (128)--.
        (010)     (054)          (402)
        Is 98 avl: 1
        Is 12 avl: 1
               .-------(098)-------.
          .--(012)--.         .--(128)--.
        (010)     (054)     (097)     (402)
        Is 98 avl: 0
               .-------(098)--.
          .--(012)--.       (128)--.
        (010)     (054)          (402)--.
                                      (430)
        Is 98 avl: 0
               .-------(098)--.
          .--(012)--.       (128)--.
        (010)     (054)          (402)-------.
                                        .--(430)
                                      (420)
        Is 98 avl: 0

