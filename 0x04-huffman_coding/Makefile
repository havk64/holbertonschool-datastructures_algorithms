CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic
T0OBJS	:= $(addprefix heap/, 0-main.o heap_create.o)
T0	:= heap_create

all: $(T0)

$(T0): $(T0OBJS) heap/heap.h
	$(CC) $(CFLAGS) -o $@ $^

.PHONY	: clean
clean:
	$(RM) heap/*.o
