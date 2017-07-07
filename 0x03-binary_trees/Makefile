CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic
SRC	:= binary_tree_print.c
OBJS	:= $(SRC:.c=.o)
OBJ	:= $(wildcard *.o)
T0	:= 0-node
T1	:= 1-node

all: $(T0) $(T1)

$(T0): 0-main.o 0-binary_tree_node.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T1): 1-main.o 1-binary_tree_insert_left.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(OBJ) $(OBJS)

re: clean all
