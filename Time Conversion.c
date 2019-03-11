#include<stdio.h>
#include<string.h>
#define x 5
int func(int hh,int mm,int ss)
{
    char ch[5];
    scanf("%d:%d:%d%s",&hh,&mm,&ss,ch);
    hh =  (strcmp(ch,"PM")==0 && hh!=12)? hh += 12 : hh;
    hh =  (strcmp(ch,"AM")==0 && hh==12)? hh = 0 : hh;

    printf("%02d:%02d:%02d",hh,mm,ss);
    return 1;
}

main()
{
    int hh,mm,ss;
    func(hh,mm,ss);
    return(0);
}
