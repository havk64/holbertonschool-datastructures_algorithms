CC	:= gcc
CFLAGS	:= -g -O0 -Wall -Wextra -Werror -pedantic
SRC	:= 1-binary.c 1-main.c 
BIN	:= binary_search

$(BIN): $(SRC) search_algos.h
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(BIN)
