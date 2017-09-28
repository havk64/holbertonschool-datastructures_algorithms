CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic
T0	:= heap_create

all: $(T0)

$(T0): heap/0-main.o heap/heap_create.o heap/heap.h
	$(CC) $(CFLAGS) -o $@ $^
