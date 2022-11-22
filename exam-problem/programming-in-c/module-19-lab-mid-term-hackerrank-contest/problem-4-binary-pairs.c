#include<stdio.h>
#include<string.h>

int main()
{
    int t, n, i, j, k, len, m;
    int count;

    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d", &n);

        char s[n];
        getchar();

        scanf("%[^\n]s", &s);

        len = strlen(s);


        char a[2] = "10";
        char b[2] = "01";

        m = 2;

        if(len==n)
        {
            count=0;
            for(j=0; j<=n-m; j++){
                for(k=0; k<m; k++){
                    if(s[j+k] != a[k])
                        break;
                }

                if(k==m)
                    count++;

            }

            for(j=0; j<=n-m; j++){
                for(k=0; k<m; k++){
                    if(s[j+k] != b[k])
                        break;
                }

                if(k==m)
                    count++;
            }

            printf("%d\n", count);
        }
    }

    return 0;
}
