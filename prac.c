#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    printf("location of code: %p\n", main); // first
    printf("location of heap: %p\n", malloc(100e6)); // second
    int x = 3;
    printf("location of stack: %p\n", &x); // third
    return x;
}