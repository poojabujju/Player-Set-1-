#include<stdio.h>
#include<string.h> 
void main()
{
    char ch1[10],ch2[10];
    int i,j,l1,l2,c=0;
    printf("Enter two strings ");
    scanf("%s\t%s",ch1,ch2);
    l1=strlen(ch1);
    l2=strlen(ch2);
    printf("%d",l1);
    for(i=0;ch1[i]!='\0';i++)
    {
        for(j=0;ch2[j]!='\0';j++)
    {
        if(ch1[i]==ch2[j])
        {
            c++;
        }
        
    }
    
}
if(c==l1)
{
    printf("Isomorphic");
}
else
{
    printf("Not an Isomorphic");
}
}
