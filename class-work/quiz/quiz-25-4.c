# include <stdio.h>
void func(int x)
{
    x = 80;
}
int main()
{
    int y = 50;
    func(y);
    printf("%d", y);
    return 0;
}
