#include<stdio.h>

char findGrade(double);

int main()
{
    double mark;

    printf("Enter your mark (0 - 100): ");
    scanf("%lf", &mark);

    char grade = findGrade(mark);

    if(grade == 'i')
    {
        printf("\n%.2lf is an INVALID mark input! Mark should be 0 - 100\n", mark);
        printf("Please enter the mark again...\n");
    }
    else
        printf("\nYour mark %.2lf has got a grade: %c\n", mark, grade);

    return 0;
}


char findGrade(double mark)
{
    if(mark >= 80 && mark <= 100)
        return 'A';
    else if(mark >= 60 && mark < 80)
        return 'B';
    else if(mark >= 40 && mark < 60)
        return 'C';
    else if(mark >= 0 && mark < 40)
        return 'F';
    else
        return 'i';
}
