#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <assert.h>

long long int fibo(int n) {
    if (n < 2)
	return n;

    return fibo(n-1) + fibo(n-2);
}

long long int fibo_printf(int n) {
    if (n < 2)
	return n;

    long long int val = fibo_printf(n-1) + fibo_printf(n-2);
    printf("%lld\n", val);

    return val;
}

int main(int argc, char *argv[]) {
    int n=20;
    if (argc == 2)
	n = atoi(argv[1]);
    
    struct timespec start, middle, end;

    clock_gettime(CLOCK_REALTIME, & start);
    long long int res = fibo(n);
    clock_gettime(CLOCK_REALTIME, & middle);
    long long int res_printf = fibo_printf(n);
    clock_gettime(CLOCK_REALTIME, & end);

    assert(res == res_printf);
    
    long long int delta = (middle.tv_sec - start.tv_sec)* 1000000000LL
	+ (middle.tv_nsec - start.tv_nsec);
    long long int delta_printf = (end.tv_sec - middle.tv_sec)* 1000000000LL
	+ (end.tv_nsec - middle.tv_nsec);

    long double ratio = delta_printf / (long double) delta;
    
    fprintf(stderr, "fibo(%d) == %lld,\n computed in %lld ns without printf,\n computed in %lld ns with printf\n Ratio of slowdown: %Lg\n",
	    n, res, delta, delta_printf, ratio);
}
