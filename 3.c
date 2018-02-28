#include<stdio.h>
void main()
{

    int r=0,i,n;
    scanf("%d",&n);
    while(n!=0)
{
    i=n%10;
    r=r*10+i;
    n=n/10;
}
        printf("%d",r);
    }
