CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic
SRC	:= 0-binary_tree_node.c binary_tree_print.c free_tree.c
OBJS	:= $(SRC:.c=.o)
ALLOBJ	:= $(wildcard *.o)
T0	:= 0-node
T1	:= 1-node

all: $(T0) $(T1)

$(T0): 0-main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T1): 1-main.o 1-binary_tree_insert_left.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(ALLOBJ) $(OBJS)

re: clean all
