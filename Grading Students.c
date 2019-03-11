#include<stdio.h>
#define x 100
main()
{
    int n,i,a[x];
    scanf("%d",&n);
    for(i=0; i<n ;i++)
    {
        int temp;
        scanf("%d",&a[i]);
        if(a[i]>=38)
        {
            if(a[i]%5 > 2)
            {
                temp = 5-a[i]%5;
                a[i] += temp;
            }
        }        printf("%d\n",a[i]);
    }
    return (0);
}
