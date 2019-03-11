#include<bits/stdc++.h>
using namespace std;

int main() {
    long long s, t, a, b, m, n;
    cin>>s>>t>>a>>b>>m>>n;
    if(a<s && s<t && t<b)
    {
        long long d,i,j;
        int count1=0, count2=0;
        long long x;
        for (i=0; i<m ;i++)
        {
            cin>>d;
            x=(a+d);
            if (x>=s&&x<=t)
                count1++;

        }
        long long y;
        for(j=0; j<n ;j++)
        {
            cin>>d;
            y=(b+d);
            if (y>=s && y<=t)
                count2++;
        }
        cout<<count1<<endl<<count2;
    }
    return 0;
}
