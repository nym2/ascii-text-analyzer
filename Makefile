CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11
TARGET = build/ascii_analyzer

SRC = src/main.c src/analyzer.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run