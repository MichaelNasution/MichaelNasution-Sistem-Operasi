/*cetakpid.c*/

#include <unistd.h>
#include <stdio.h>

int main (){
        printf("The process ID %d\n", (int) getpid());
        printf("ID parent process ID is %d\n", (int) getppid());
        return 0;
        
}
