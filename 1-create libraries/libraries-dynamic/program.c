/* filename: program.c */

#include "total.h"

#include<stdlib.h>
#include<stdio.h>

int main (int argc, char* argv[])
{
    printf ("------------------");
    printf ("| Static Library |");
    printf ("------------------\n");
    int data[] = {11,22,33,44,55,66,77,88,99};
    int t = total (data, 9);
    printf("The total is %d\n", t);
    return EXIT_SUCCESS;
}
