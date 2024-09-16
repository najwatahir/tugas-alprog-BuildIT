#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int bilPrima(long long n)
{
    if (n < 1)
    {
        return 0;
    }

    for (long long i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    long long int angka;
    scanf("%lld", &angka);

    if (bilPrima(angka) == 0)
    {
        printf("BUKAN");
    }
    else
    {
        printf("PRIMA");
    }
    return 0;
}