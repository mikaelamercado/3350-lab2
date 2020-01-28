all: donut

donut: lab2.c
	gcc lab2.c -o donut -lm -Wall

.PHONY: clean
clean: 
	@rm -rf a.out donut 2>/dev/null
