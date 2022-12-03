#include<stdio.h>

void warning(void)
{
    printf("Fire in the building! Please evacuate!\n");
}

int main(void)
{
    warning();
    warning();
    warning();
    warning();
    warning();

    return 0;
}
