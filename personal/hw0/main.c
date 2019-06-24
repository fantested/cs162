#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit lim;

    int i = getrlimit(RLIMIT_STACK, &lim);
    printf("stack size: %ld\n", lim.rlim_cur);
    int k = getrlimit(RLIMIT_NPROC, &lim);
    printf("process limit: %ld\n", lim.rlim_cur);
    int j = getrlimit(RLIMIT_NOFILE, &lim);
    printf("max file descriptors: %ld\n", lim.rlim_cur);

    return 0;
}
