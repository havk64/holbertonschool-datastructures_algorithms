CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic
T0OBJS	:= $(addprefix heap/, 0-main.o heap_create.o)
T1OBJS	:= $(addprefix heap/, 1-main.o binary_tree_node.o)
T0	:= heap_create
T1	:= binary_tree_node

.PHONY	: all clean cleanall

all	: $(T0) $(T1)

$(T0)	: $(T0OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T1)	: $(T1OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(T0OBJS) $(T1OBJS)

cleanall: clean
	$(RM) $(T0) $(T1)
