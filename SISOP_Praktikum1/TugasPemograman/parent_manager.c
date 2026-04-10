#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){

    pid_t pid;

    pid = fork();

    if(pid == 0){

        printf("Child process menjalankan stat_worker.out\n");

        execl("./stat_worker.out",
              "stat_worker.out",
              "10","20","30","40","50",
              NULL);

        printf("Exec gagal\n");
    }

    else if(pid > 0){

        printf("Parent tidur 10 detik sebelum wait\n");

        sleep(10);

        printf("Parent menunggu child selesai...\n");

        wait(NULL);

        printf("Child selesai\n");
    }

    else{

        printf("Fork gagal\n");
    }

    return 0;
}
