#include<stdio.h>
#include<string.h>
void main()
{
    char a[10];
    int i,j,t;
    printf("Enter the string : ");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
        if(i%2!=0)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        
    }
    printf("%c",a[i]);
}
}
