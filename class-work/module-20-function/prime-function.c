#include<stdio.h>

int isPrime(int);

int main()
{
    int n;
    scanf("%d", &n);
    int p = isPrime(n);

    if(p==1)
        printf("%d is a prime number\n", n);
    else
        printf("%d is a composite number\n", n);

    return 0;
}

int isPrime(int n)
{
    int flag = 1;
    if(n == 1 || n == 2)
       return n;
    else
    {
        for(int i=2; i<n; i++)
        {
            if(n%i == 0)
                return 0;
        }
        return 1;
    }
}
