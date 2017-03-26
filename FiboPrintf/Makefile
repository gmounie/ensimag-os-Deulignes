CFLAGS=-O3 -Wall -Wextra -march=native -std=gnu11

all: fibo

fibo: fibo.o

_PHONY_: test
test: all
	./fibo
	./fibo > /dev/null

clean:
	rm fibo fibo.o

