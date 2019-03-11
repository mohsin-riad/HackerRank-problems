
#include <stdio.h>
#define x 10
int main()
{
    int n,i,a[x],b[x];
    int count1=0,count2=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
            count1++;
        if(a[i]<b[i])
            count2++;
    }
    printf("%d %d",count1++,count2++);
    return (0);
}
