
#include<stdio.h>
int main()
{
    int i,j,n,x;
    scanf("%d %d",&n,&x);
    int temp[n];

    for(i=0; i<n ;i++)
    {
        scanf("%d",&temp[i]);
    }
    for(j=0;j<n;j++)
    {
        printf("%d",temp[(j+x)%n]);
        if(j!=n-1)
            printf(" ");
    }
    return (0);
}

//ALTERNATIVE
/*
#include<stdio.h>
main()
{
    int i,j,n,x;
    scanf("%d %d",&n,&x);
    int temp[n],rev[n];

    for(i=0; i<n ;i++)
    {
        scanf("%d",&temp[i]);
    }
    while(x--)
    {

        for(j=0;j<n;j++)
        {
            if(j==(n-1))
                rev[j] = temp[0];
            else
                rev[j] = temp[j+1];
        }
        for(i=0;i<n;i++)
            temp[i] = rev[i];
    }

    for(i=0;i<n;i++)
    {
        printf("%d",rev[i]);
        if(i != n-1)
            printf(" ");
    }
    return (0);
}
*/


