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
T11	:= 11-size
T12	:= 12-leaves
T13	:= 13-nodes
T14	:= 14-balance
T15	:= 15-full

all: $(T0) $(T1) $(T2) $(T3) $(T4) $(T5) $(T6) $(T7) $(T8) $(T9) $(T10) $(T11) $(T12) $(T13) $(T14) $(T15)

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

$(T11): 11-binary_tree_size.o 11-main.o 2-binary_tree_insert_right.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T12): 12-binary_tree_leaves.o 12-main.o 2-binary_tree_insert_right.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T13): 13-binary_tree_nodes.o 13-main.o 2-binary_tree_insert_right.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T14): 14-binary_tree_balance.o 14-main.o 2-binary_tree_insert_right.o 1-binary_tree_insert_left.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T15): 15-binary_tree_is_full.o 15-main.o 2-binary_tree_insert_right.o  $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(ALLOBJ) $(OBJS)

re: clean all
