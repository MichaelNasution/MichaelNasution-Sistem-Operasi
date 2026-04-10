/*fork_3.c*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main (int arg, char *argv[]){
    int pid;

    printf("Main Process ID (PID) = %d Parent Process ID (PPID) = %d\n", getpid(), getppid());

    pid = fork();

    if(pid == 0){
        printf("This is the child process\n");
        printf("PID = %d\n", pid);
        printf("Child's PID %d parent PID %d\n", getpid(), getppid());
    }else{
        printf("This is the parent process\n");
        printf("PID = %d\n", pid);
        printf("Parent's PID %d parent PID %d\n", getpid(), getppid());
    }

    return 0;
}
