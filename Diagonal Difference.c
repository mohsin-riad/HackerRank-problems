#include<stdio.h>
#define n 100
main()
{
    int a[n][n];
    int x,i,j;
    scanf("%d",&x);

    int s1=0,s2=0;
    for(i=0; i<x ;i++)
    {
        for(j=0; j<x ;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
                s1+=a[i][j];
            if(i+j == x-1)
                s2+=a[i][j];
        }
    }
    //int ans = abs(s1-s2);
    printf("%d",abs(s1-s2));

    return (0);
}
