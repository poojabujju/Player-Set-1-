
#include <stdio.h>
#include<string.h>
void main()
{
    char a[10];
    int l,i;
    printf("Enter a string : ");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(i==0)
        {
            a[i]=toupper(a[i]);
        }
    }
    printf("%s",a);
}
    
