#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Start!\n");
    int forkRet = fork();
    if (forkRet == 0) {
        printf("child process %d\n", getpid());
    } else {
        printf("forkRet:%d parent process:%d", forkRet, getpid());
    }
    return 0;
}