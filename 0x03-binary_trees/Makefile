CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic
SRC	:= 0-main.c 0-binary_tree_node.c binary_tree_print.c
OBJS	:= $(SRC:.c=.o)
BIN	:= 0-node

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(OBJS)

re: clean $(BIN)
