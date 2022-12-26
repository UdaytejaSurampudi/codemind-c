#include<stdio.h>
int main()
{
    int a,b,rem,temp,c=0;
    scanf("%d",&a);
    temp=a;
    b=a*a;
    while(b!=0)
    {
        rem=b%10;//if 9  given 9 is remainder 
        c=rem+c;
        b=b/10;
    }
    if(c==temp)
    {
    	printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
}