int main()
{
    char inputArray[5][100], reversedArray[5][100];

    int n,i;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("Enter the string for palindrome check \n");
        scanf("%s", inputArray[i]);
    }
    for(i=1; i<=n; i++)
    {
        strcpy(reversedArray[i], inputArray[i]);

        strrev(reversedArray[i]);
        int l = strlen(inputArray[i]-1);

        if(strcmp(inputArray[i], reversedArray[i]) == 0 )
        {
            if(l<7)
            {
                printf("Case#%d: %s\n",i,inputArray[i]);
            }
        }

        else if(strcmp(inputArray[i], reversedArray[i]) == 0 )
        {
            if(l<7)

            {
                printf("%c%d%c",inputArray[0],l-2,inputArray[l-1]);
            }
        }
        else
            printf("Case#%d: Not Palindrome.\n",i);
    }

    getch();
    return 0;
}
