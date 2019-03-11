#include<stdio.h>
#define x 100
main()
{
    int i,j,n;
    scanf("%d",&n);
    int temp[n],rev[n];
    //int len = strlen(temp);
    for(i=0,j=n-1;i<n;i++,j--)
    {
        scanf("%d",&temp[i]);
        rev[j] = temp[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",rev[i]);
    }
    return (0);
}
