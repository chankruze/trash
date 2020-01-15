#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    int *p, *q;

    p = malloc(SIZE * sizeof(int));
    q = calloc(SIZE, sizeof(int));

    free(p);
    free(q);

    p = malloc(SIZE * sizeof(int));
    q = calloc(SIZE, sizeof(int));

    if (p == NULL || q == NULL)
    {
        printf("Memory allocation unsuccesful\n");
        exit(0);
    }

    printf("Values at address allocated by malloc\n");
    printf("address   value\n");
    printf("----------------\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%ld %d\n", (p + i), *(p + i));
    }

    printf("\nValues at address allocated by calloc\n");
    printf("address   value\n");
    printf("----------------\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%ld %d\n", (q + i), *(q + i));
    }

    free(p);
    free(q);
}