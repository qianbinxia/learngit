#include "stdio.h"

int fn(int n) {
    if(n == 0) return 1;
    return n*f(n-1);
}

int main()
{
    int i;

    printf("Hello World master and feature1 merged!/n");

    printf("A new line start with number %d!/n", i);

    for(i=0; i<10; i++)
        printf("%d, ", fn(i));
    printf("\n");

    

    return 0;

}
