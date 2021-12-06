#include<stdio.h>
main()
{
    int i,j;
    for (i=1;i=4;i++)
    {
        for (j=i;j<=4;j++)
        {
            if(j==1|| i==4)
            {
                printf("*");
            }
            else
            {
                printf("");
            }
        }
        printf("\n");
    }
}
