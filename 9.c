#include<stdio.h>
void main()
{
    int n[5],a,i,c=0;
    printf("Enter a Range : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
     scanf("%d",&n[i]);   
    }
for(i=1;i<=a;i++)
{
    for(i=1;i<=a;i++)
    {
    if(n[i]%i==0)
    {
        c++;
    }
    if(c==2)
{
    printf("%d is not Prime\n",n[i]);
}
else
{
    printf("%d is Prime\n",n[i]);
}
}
}
}
