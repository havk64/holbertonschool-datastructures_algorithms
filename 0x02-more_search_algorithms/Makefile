CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic
BIN	:= jump

$(BIN): 100-jump.c
	$(CC) $(CFLAGS) -o $@ $<
	$(CC) $(CFLAGS) -o $@ $^ -lm

clean:
	$(RM) $(BIN)

re: clean $(BIN)
