#include<stdio.h>
#define x 10
int min_max(unsigned long long a[]);
int main()
{
    unsigned long long a[x];
    int i;
    for(i=0; i<5 ;i++)
        scanf("%llu",&a[i]);
    min_max(a);
    return (0);
}

int min_max(unsigned long long a[])
{
    unsigned long long p,j,i,match,min,max,s[x];

    for(i=0; i<5 ;i++)
    {
        s[i]=0;
        match = i;
        for(j=0; j<5 ;j++)
        {
            if(match == j)
                continue;
            s[i]+=a[j];
        }
        //printf("sum without %llu is = %llu\n",match,s[i]);
    }
    max = s[0];
    min = s[0];
    for(p=0; p<5 ;p++)
    {
        if(min > s[p])
            min = s[p];
        if(max < s[p])
            max = s[p];
    }
    printf("%llu %llu",min,max);
    return 1;
}

