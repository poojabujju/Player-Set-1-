#include<stdio.h>
#include<string.h>
int main(void) 
{
    char a[100];
        int num,i,v,x;
    gets(a);
    for(i=0 ; i < a[i] != '\0' ; i++)
{
	if(a[i] == 'i')
{
	num= num+1;
}
else if( a[i] == 'v') 
{
	num=num+5;
}
	else if( a[i] == 'x')
{
		num= num + 10;	
	}
}
 for(i=0 ; i < a[i] != '\0' ; i++)
{
	if(a[i] == 'i' && (a[i+1] == 'v' ||   a[i+1]== 'x'))
	num = num-2;
	}   
	printf("%d\t",num); 
	return 0;
}
