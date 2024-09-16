#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int nilai[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nilai[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nilai[j] < nilai[min_idx])
            {
                min_idx = j;
            }
        }
        int temp = nilai[min_idx];
        nilai[min_idx] = nilai[i];
        nilai[i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", nilai[i]);
    }

    return 0;
}
