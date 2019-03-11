#include<stdio.h>

int func(int n[],int x)
{
    int i,j;
    for(i=0; i<x ;i++)
        scanf("%d",&n[i]);

    int max = n[0];
    for(i=0; i<x ;i++)
    {
        if(max <= n[i])
            max = n[i];
    }

    int count=0;
    for(i=0; i<x ;i++)
    {
        if(n[i] == max)
            count++;
    }
    return count;
}


main()
{
    int x;
    scanf("%d",&x);
    int n[x];
    printf("%d",func(n,x));
    return(0);
}
