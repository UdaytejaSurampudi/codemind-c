#include<stdio.h>
int main ()
{ 
int n,k,x,y; 
scanf("%d%d%d%d",&n,&k,&x,&y); 
int tr; 
tr=k*x; 
int rm; 
rm=n-k; 
int a; 
if ((rm*x) > (rm*y)) 
{ 
a=(rm*y); 
} 
else 
{ 
a=(rm*x); 
} 
int amount; 
amount=a+tr; 
printf("%d",amount);
}