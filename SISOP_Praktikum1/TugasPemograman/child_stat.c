#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int i;
    int num;
    int max, min;
    float sum = 0;

    if(argc < 2){
        printf("Masukkan angka sebagai argumen\n");
        return 1;
    }

    max = min = atoi(argv[1]);

    for(i = 1; i < argc; i++){

        num = atoi(argv[i]);

        if(num > max)
            max = num;

        if(num < min)
            min = num;

        sum += num;
    }

    printf("Maximum : %d\n", max);
    printf("Minimum : %d\n", min);
    printf("Average : %.2f\n", sum/(argc-1));

    return 0;
}
