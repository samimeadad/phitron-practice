#include<stdio.h>

int main(){
    int students, subject, i, j;
    float total, avg, mark;

    printf("How many students are there: ");
    scanf("%d", &students);

    printf("How many subjects: ");
    scanf("%d", &subject);

    printf("\n");
    for(i=1; i<=students; i++){
        total = 0;
        printf("Enter Student-%d Marks: ", i);
        for(j=1; j<=subject; j++){
            scanf("%f", &mark);
            total += mark;
        }
        printf("\nTotal Marks of Student-%d: %.2f", i, total);
        printf("\nAverage Marks of Student-%d: %.2f\n\n", i, total/subject);
    }

    return 0;
}
