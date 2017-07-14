CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic
SRC	:= 0-binary_tree_node.c binary_tree_print.c 3-binary_tree_delete.c
OBJS	:= $(SRC:.c=.o)
ALLOBJ	:= $(wildcard *.o)
T0	:= 0-node
T1	:= 1-node
T2	:= 2-node
T3	:= 3-del
T4	:= 4-leaf
T5	:= 5-root
T6	:= 6-pre
T7	:= 7-in
T8	:= 8-post
T9	:= 9-height
T10	:= 10-depth

all: $(T0) $(T1) $(T2) $(T3) $(T4) $(T5) $(T6) $(T7) $(T8) $(T9) $(T10)

$(T0): 0-main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T1): 1-main.o 1-binary_tree_insert_left.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T2): 2-main.o 2-binary_tree_insert_right.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T3): 3-main.o 2-binary_tree_insert_right.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T4): 4-main.o 4-binary_tree_is_leaf.o 2-binary_tree_insert_right.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T5): 5-main.o 5-binary_tree_is_root.o 2-binary_tree_insert_right.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T6): 6-binary_tree_preorder.o 6-main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T7): 7-binary_tree_inorder.o 7-main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T8): 8-binary_tree_postorder.o 8-main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T9): 9-binary_tree_height.o 9-main.o 2-binary_tree_insert_right.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T10): 10-binary_tree_depth.o 10-main.o 2-binary_tree_insert_right.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(ALLOBJ) $(OBJS)

re: clean all
