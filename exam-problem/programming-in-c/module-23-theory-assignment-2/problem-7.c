#include <stdio.h>

void sortArray(int ara[], int n);
double findMedian(int ara[], int n);
void printArray(int ara[], int n);

int main()
{
    int n, i;

    printf("Enter how many numbers in the array: ");
    scanf("%d", &n);

    int ara[n];

    for(i = 0; i < n; i++)
        scanf("%d", &ara[i]);

    double median = findMedian(ara, n);

    printf("Median = %.1lf\n", median);

    return 0;
}


void sortArray(int ara[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ara[j] > ara[j + 1])
            {
                int temp = ara[j];
                ara[j] = ara[j + 1];
                ara[j + 1] = temp;
            }
        }
    }
}

void printArray(int ara[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", ara[i]);
}


double findMedian(int ara[], int n)
{
    double median;

    sortArray(ara, n);

    if(n % 2 == 1)
        median = ara[(n-1)/2];
    else
        median = (ara[n/2] + ara[(n/2)-1])/2.0;

    return median;
}
