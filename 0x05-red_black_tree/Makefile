CC	= gcc
CFLAGS	= -Wall -Wextra -Werror -pedantic
T0	= rb_tree_node

all: $(T0)

$(T0): 0-main.o 0-rb_tree_node.o rb_tree_print.o
	$(CC) $(CFLAGS) -o $@ $^
