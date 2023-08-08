SRCS := $(wildcard *.cpp)
PROGS := $(patsubst %.cpp,%,$(SRCS))

all: $(PROGS)

clean:
	rm -rf $(PROGS)

.PHONY: run
run: $(PROGS)
	./$(shell echo $(PROGS) | tr ' ' '\n' | fzf --layout=reverse --header="Choose a program to run:")
