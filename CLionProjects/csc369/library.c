#include "library.h"

#include <stdio.h>
#include <stdlib.h>

#define N 409600000
#define M 100000
#define PAGESIZE 4096

int main(int argc, char **argv){
    int i;
    int *X = malloc(N * sizeof(int));
    if(!X) return 1;
    for (i = 0; i < M; i++)
        X[i*PAGESIZE] = 0;
    return 0;
}

