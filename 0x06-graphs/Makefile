CC	= gcc
CFLAGS	= -g3 -Wall -Wextra -Werror -pedantic
T0	= 0-graph_create
T1	= 1-graph_add_vertex
T2	= 2-graph_add_edge
T3	= 3-graph_delete
T4	= 4-depth_first_traverse

.PHONE	: all clean re

all: $(T0) $(T1) $(T2) $(T3) $(T4)

$(T0): 0-main.o 0-graph_create.o
	$(CC) $(CFLAGS) -o $@ $^

$(T1): 1-main.o 0-graph_create.o 1-graph_add_vertex.o graph_display.o
	$(CC) $(CFLAGS) -o $@ $^

$(T2): 2-main.o 0-graph_create.o 1-graph_add_vertex.o 2-graph_add_edge.o \
graph_display.o
	$(CC) $(CFLAGS) -o $@ $^

$(T3): 3-main.o 0-graph_create.o 1-graph_add_vertex.o 2-graph_add_edge.o \
3-graph_delete.o graph_display.o
	$(CC) $(CFLAGS) -o $@ $^


$(T4): 4-main.o 0-graph_create.o 1-graph_add_vertex.o 2-graph_add_edge.o \
3-graph_delete.o 4-depth_first_traverse.o graph_display.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) *.o

re: clean all
