CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic -Iheap/
T0OBJS	:= 0-main.o heap/heap_create.o
T1OBJS	:= 1-main.o heap/binary_tree_node.o
T2OBJS	:= 2-main.o $(addprefix heap/, heap_insert.o binary_tree_node.o \
	   heap_create.o heap_delete.o) utils/binary_tree_print.o
T3OBJS	:= 3-main.o $(addprefix heap/, heap_insert.o binary_tree_node.o \
	   heap_create.o heap_delete.o heap_extract.o) utils/binary_tree_print.o
T4OBJS	:= 4-main.o $(addprefix heap/, heap_insert.o binary_tree_node.o \
	   heap_create.o heap_delete.o) utils/binary_tree_print.o
T5OBJS	:= 5-main.o symbol.o
T6OBJS	:= 6-main.o huffman_priority_queue.o symbol.o $(addprefix heap/, \
	   heap_insert.o binary_tree_node.o heap_create.o heap_delete.o) \
	   utils/binary_tree_print.o
T7OBJS	:= 7-main.o huffman_extract_and_insert.o huffman_priority_queue.o \
	   symbol.o $(addprefix heap/, heap_insert.o binary_tree_node.o \
	   heap_create.o heap_delete.o heap_extract.o) utils/binary_tree_print.o
T0	:= heap_create
T1	:= binary_tree_node
T2	:= heap_insert
T3	:= heap_extract
T4	:= heap_delete
T5	:= symbol_create
T6	:= priority_queue
T7	:= extract

.PHONY	: all clean cleanall

all	: $(T0) $(T1) $(T2) $(T3) $(T4) $(T5) $(T6) $(T7)

$(T0)	: $(T0OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T1)	: $(T1OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T2)	: $(T2OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T3)	: $(T3OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T4)	: $(T4OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T5)	: $(T5OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T6)	: $(T6OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T7)	: $(T7OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(T0OBJS) $(T1OBJS) $(T2OBJS) $(T3OBJS) $(T4OBJS) $(T5OBJS) \
	$(T6OBJS) $(T7OBJS)

cleanall: clean
	$(RM) $(T0) $(T1) $(T2) $(T3) $(T4) $(T5) $(T6) $(T7)
