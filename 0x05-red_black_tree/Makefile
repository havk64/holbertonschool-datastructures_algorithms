CC	= gcc
CFLAGS	= -Wall -Wextra -Werror -pedantic
T0	= rb_tree_node
T1	= rb_tree_valid
T2	= rb_tree_insert

all: $(T0)

$(T0): 0-main.o 0-rb_tree_node.o rb_tree_print.o
	$(CC) $(CFLAGS) -o $@ $^

$(T1): 1-main.o 1-rb_tree_is_valid.o 0-rb_tree_node.o rb_tree_print.o
	$(CC) $(CFLAGS) -o $@ $^

$(T2): 2-main.o 2-rb_tree_insert.o 0-rb_tree_node.o rb_tree_print.o
	$(CC) $(CFLAGS) -o $@ $^
