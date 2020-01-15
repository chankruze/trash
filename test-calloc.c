#include <stdio.h>
#include <stdlib.h>

// calloc(n, sizeof(x))
int main()
{
    int n, *p, avg, sum = 0;

    printf("Number of students:");
    scanf("%d\n", &n);

    p = (int *) calloc(n, sizeof(int));

    if (p == NULL)
    {
        printf("Memory allocation unsuccesful\n");
        exit(0);
    }

    for (int i = 0; i < n; i++)
    {
        int *addr = (p + i);
        scanf("%d", addr);
        sum += *addr;
    }

    avg = sum / n;
    printf("Average = %d\n", avg);
}