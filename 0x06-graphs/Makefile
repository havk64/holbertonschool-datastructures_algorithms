CC	= gcc
CFLAGS	= -g3 -Wall -Wextra -Werror -pedantic
T0	= 0-graph_create
T1	= 1-graph_add_vertex

.PHONE	: all

all: $(T0) $(T1)

$(T0): 0-main.o 0-graph_create.o
	$(CC) $(CFLAGS) -o $@ $^

$(T1): 1-main.o 0-graph_create.o 1-graph_add_vertex.o graph_display.o
	$(CC) $(CFLAGS) -o $@ $^

