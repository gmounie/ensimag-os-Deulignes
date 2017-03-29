#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
	(void) argc; (void)argv;
	printf("Before from %d\n", getpid());
	// missing: fflush(stdout);
	fork();
	printf("After from %d\n", getpid());	
}
