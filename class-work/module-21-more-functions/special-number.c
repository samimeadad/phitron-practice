#include<stdio.h>

int validateNumber(int);
int findDigitSum(int n);
int isPrime(int);


int main()
{
    int n;

    scanf("%d", &n);

    int myDigitValidation = validateNumber(n);
    int myDigitSum = findDigitSum(n);
    int myDigitPrime = isPrime(n);

    printf("%d %d %d\n\n", myDigitValidation, myDigitSum, myDigitPrime);

    if(myDigitValidation == 1 && myDigitSum >= 10 && myDigitPrime == 1)
        printf("%d is a Special Number\n", n);
    else
        printf("%d is NOT a Special Number\n", n);

    return 0;
}

int validateNumber(int n)
{
    int digit;

    while(n>0)
    {
        if(n%10 == 7)
            return 1;
        else
            n /= 10;
    }

    return 0;
}

int findDigitSum(int n)
{
    int digit;
    int sum = 0;
    while(n>0)
    {
        sum += n%10;
        n /= 10;
    }

    return sum;
}

int isPrime(int n)
{
    int lastDigit = n%10;

    if(lastDigit == 1 || lastDigit == 2 || lastDigit == 3 || lastDigit == 5 || lastDigit == 7)
        return 1;
    else
        return 0;

}
