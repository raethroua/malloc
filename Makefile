CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -g
SOURCES = $(wildcard src/*.c)
OBJECTS = $(SOURCES:.c=.o)
EXEC = malloc

all: $(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC)

clean:
	rm -f $(OBJECTS) $(EXEC)
