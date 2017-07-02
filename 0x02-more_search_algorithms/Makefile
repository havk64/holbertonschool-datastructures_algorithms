CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic -lm
BIN	:= jump

$(BIN): 100-jump.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	$(RM) $(BIN)

re: clean $(BIN)
