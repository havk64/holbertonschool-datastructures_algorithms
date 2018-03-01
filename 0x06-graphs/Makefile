CC	= gcc
CFLAGS	= -g -Wall -Wextra -Werror -pedantic
T0	= 0-graph_create

.PHONE	: all

all: $(T0)

$(T0): 0-main.o 0-graph_create.o
	$(CC) $(CFLAGS) -o $@ $^
