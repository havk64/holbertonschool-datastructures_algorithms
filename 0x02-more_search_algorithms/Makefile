CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic
SRC	:= 100-jump.c 100-main.c
BIN	:= jump

$(BIN): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^ -lm

clean:
	$(RM) $(BIN)

re: clean $(BIN)
