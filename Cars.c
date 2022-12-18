#include<stdio.h>
int main ()
{ 
int a; 
scanf("%d",&a); 
int b; 
if (a%4==0) 
{
 b=(a/4);
  } 
  else { 
  b=(a/4)+1; 
  } 
  printf("%d",b);
}
