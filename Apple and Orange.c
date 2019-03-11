#include<stdio.h>
int main()
{
    long long s, t, a, b, m, n;
    scanf("%lld %lld %lld %lld %lld %lld",&s,&t,&a,&b,&m,&n);
    if(a<s && s<t && t<b)
    {
        long long d,i,j;
        int count1=0, count2=0;
        long long x;
        for (i=0; i<m ;i++)
        {
            scanf("%lld",&d);
            x=(a+d);
            if (x>=s && x<=t)
                count1++;

        }
        long long y;
        for(j=0; j<n ;j++)
        {
            scanf("%lld",&d);
            y=(b+d);
            if (y>=s && y<=t)
                count2++;
        }
        printf("%d\n%d",count1,count2);
    }

    return (0);
}
