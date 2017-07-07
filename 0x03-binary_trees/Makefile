CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic
SRC	:= 0-binary_tree_node.c binary_tree_print.c 3-binary_tree_delete.c
OBJS	:= $(SRC:.c=.o)
ALLOBJ	:= $(wildcard *.o)
T0	:= 0-node
T1	:= 1-node
T2	:= 2-node
T3	:= 3-del

all: $(T0) $(T1) $(T2) $(T3)

$(T0): 0-main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T1): 1-main.o 1-binary_tree_insert_left.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T2): 2-main.o 2-binary_tree_insert_right.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T3): 3-main.o 2-binary_tree_insert_right.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(ALLOBJ) $(OBJS)

re: clean all
