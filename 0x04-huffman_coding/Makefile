CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic -Iheap/
T0OBJS	:= 0-main.o heap/heap_create.o
T1OBJS	:= 1-main.o heap/binary_tree_node.o
T2OBJS	:= 2-main.o $(addprefix heap/, heap_insert.o binary_tree_node.o \
	   heap_create.o heap_delete.o) utils/binary_tree_print.o
T3OBJS	:= 3-main.o $(addprefix heap/, heap_insert.o binary_tree_node.o \
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
