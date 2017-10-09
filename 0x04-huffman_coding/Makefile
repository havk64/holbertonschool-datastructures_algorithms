CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic -Iheap/
OBJS	:= huffman_tree.o huffman_extract_and_insert.o huffman_priority_queue.o \
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
T8	:= huffman_tree

.PHONY	: all clean cleanall

all	: $(T0) $(T1) $(T2) $(T3) $(T4) $(T5) $(T6) $(T7) $(T8)

$(T0)	: 0-main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T1)	: 1-main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T2)	: 2-main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T3)	: 3-main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T4)	: 4-main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T5)	: 5-main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T6)	: 6-main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T7)	: 7-main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(T8)	: 8-main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(OBJS)

cleanall: clean
	$(RM) $(T0) $(T1) $(T2) $(T3) $(T4) $(T5) $(T6) $(T7) $(T8)
