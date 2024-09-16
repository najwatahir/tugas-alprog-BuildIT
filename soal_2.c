#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char A[100];
    char B[100];

    scanf("%s", A);
    scanf("%s", B);

    if (strcmp(A, B) == 0)
    {
        printf("IDENTIK");
    }
    else if (strlen(A) == strlen(B))
    {
        printf("MIRIP");
    }
    else
    {
        printf("BERBEDA");
    }
    return 0;
}
