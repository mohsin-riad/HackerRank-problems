#include <stdio.h>
#define x 1000
int main()
{
    int ar[x],n,i;
    scanf("%d",&n);
    int sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    printf("%d",sum);
    return(0);
}
