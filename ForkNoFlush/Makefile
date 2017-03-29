
CFLAGS= -Wall -O3 -g -Wextra -Werror

forkNoFlush: forkNoFlush.o

clean:
	rm -f forkNoFlush forkNoFlush.o

.PHONY: test
test: forkNoFlush
	./forkNoFlush
	./forkNoFlush | wc -l
	./forkNoFlush | cat
