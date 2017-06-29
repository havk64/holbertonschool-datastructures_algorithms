CC	:= gcc
CFLAGS	:= -g -O0 -Wall -Wextra -Werror -pedantic
BIN	:= binary_search

$(BIN): 1-binary.c search_algos.h
	$(CC) $(CFLAGS) -o $@ $<

clean:
	$(RM) $(BIN)
