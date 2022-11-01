#include <stdio.h>
int main()
{
    int a, b, c, d;

    //Read the values from the user
    scanf("%d %d %d %d", &a, &b, &c, &d);

    //Check if inputs are equal to each other
    if(a==b || a==c || a==d || b==c || b==d || c==d){
        if(a==b)
            printf("Wrong Input! A and B are equal!\n");
        else if(a==c)
            printf("Wrong Input! A and C are equal!\n");
        else if(a==d)
            printf("Wrong Input! A and D are equal!\n");
        else if(b==c)
            printf("Wrong Input! B and C are equal!\n");
        else if(b==d)
            printf("Wrong Input! B and D are equal!\n");
        else
            printf("Wrong Input! C and D are equal!\n");
    }

    //Core concepts implementation
    else{
	//calculate largest number and print the output
        if(a>b && a>c && a>d)
            printf("Largest = %d\n", a);
        else if(b>a && b>c && b>d)
            printf("Largest = %d\n", b);
        else if(c>a && c>b && c>d)
            printf("Largest = %d\n", c);
        else
            printf("Largest = %d\n", d);

	//calculate smallest number and print the output
        if(a<b && a<c && a<d)
            printf("Smallest = %d\n", a);
        else if(b<a && b<c && b<d)
            printf("Smallest = %d\n", b);
        else if(c<a && c<b && c<d)
            printf("Smallest = %d\n", c);
        else
            printf("Smallest = %d\n", d);
    }

    return 0;
}
