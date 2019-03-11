#include<stdio.h>
main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int temp = n;
    for(i=0; i<n ;i++)
    {
        temp--;
        for(k=temp-1; k>=0 ;k--)
            printf(" ");
        for(j=0; j<=i ;j++)
            printf("#");
        printf("\n");
    }
    return (0);
}
