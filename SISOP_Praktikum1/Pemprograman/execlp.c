/*execlp.c*/
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main (){

    printf("Running ps with execlp \n");
    execlp("ps","ps","-axl",NULL);
    printf("Done\n");

    exit (0);
}
