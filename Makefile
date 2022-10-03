OUTPUT_FILE = Exec
CC=gcc
CFLAGS = -I.

$(info Identifing OS...)
ifdef OS
$(info $(shell echo %OS%))
RM = del /q
FIND = dir /s /b
EXEC= .exe
else
ifeq ($(shell uname -o), GNU/Linux)
$(info $(shell uname -o))
RM = rm -f
FIND = find . -name
EXEC=
else
$(error OS not supported.)
endif
endif

OBJS = $(patsubst %.c, %.o, $(shell $(FIND) "*.c"))

.PHONY: all
all: $(OBJS)
	$(CC) -o $(OUTPUT_FILE) $^ $(CFLAGS)

%.o: %.c %.h
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: debug
debug: CFLAGS = -DDEBUG -g -Wall #-fsanitize=address incompatitble with s7c-console lib
debug: all

.PHONY: clean
clean:
	$(RM) $(shell $(FIND) "*.o") $(OUTPUT_FILE)$(EXEC)