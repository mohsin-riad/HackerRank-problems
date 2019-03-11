#include <stdio.h>
#define x 100
int main()
{
    long long a[x],sum=0;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    printf("%lld",sum);
    return (0);
}
