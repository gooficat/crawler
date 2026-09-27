CFLAGS := -g -O0 -Wall -Wextra -Wpedantic -Werror -Isrc -std=c23

SRC_DIR := src
OBJ_DIR := obj
BIN_DIR := bin

SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

project := crawler

target := $(BIN_DIR)/$(project)

all: $(target)

$(target): $(OBJS)
	$(CC) -o $@ $(OBJS) $(CFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean

clean:
	mkdir -p $(OBJ_DIR)
	mkdir -p $(BIN_DIR)
	rm -f $(OBJS)
	rm -f $(target)
