CC	:= gcc
CFLAGS	:= -g -Wall -Wextra -Werror -pedantic
SRCJ	:= 100-jump.c 100-main.c
SRCI	:= 102-interpolation.c 102-main.c
SRCE	:= 103-exponential.c 103-main.c
JUMP	:= jump
INTER	:= inter
EXPO	:= expo

all: $(JUMP) $(INTER) $(EXPO)

$(JUMP): $(SRCJ)
	$(CC) $(CFLAGS) -o $@ $^ -lm

$(INTER): $(SRCI)
	$(CC) $(CFLAGS) -o $@ $^

$(EXPO): $(SRCE)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(JUMP) $(INTER) $(EXPO)

re: clean all
