CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic
T0OBJS	:= $(addprefix heap/, 0-main.o heap_create.o)
T1OBJS	:= $(addprefix heap/, 1-main.o binary_tree_node.o)
T2OBJS	:= $(addprefix heap/, 2-main.o heap_insert.o binary_tree_node.o \
	   heap_create.o heap_delete.o) utils/binary_tree_print.o
T3OBJS	:= $(addprefix heap/, 3-main.o heap_insert.o binary_tree_node.o \
	   heap_create.o heap_delete.o heap_extract.o) utils/binary_tree_print.o
T0	:= heap_create
T1	:= binary_tree_node
T2	:= heap_insert
T3	:= heap_extract

.PHONY	: all clean cleanall

all	: $(T0) $(T1) $(T2) $(T3)

$(T0)	: $(T0OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T1)	: $(T1OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T2)	: $(T2OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T3)	: $(T3OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(T0OBJS) $(T1OBJS) $(T2OBJS)

cleanall: clean
	$(RM) $(T0) $(T1) $(T2) $(T3)
