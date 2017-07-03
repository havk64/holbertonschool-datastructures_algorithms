CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic
SRCJ	:= 100-jump.c 100-main.c
SRCI	:= 102-interpolation.c 102-main.c
JUMP	:= jump
INTER	:= inter

all: $(JUMP) $(INTER)

$(JUMP): $(SRCJ)
	$(CC) $(CFLAGS) -o $@ $^ -lm

$(INTER): $(SRCI)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(JUMP) $(INTER)

re: clean all
