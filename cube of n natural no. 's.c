#include<stdio.h>
int main()
{ int n,i,cube=1;
printf ("enter any no.");
scanf ("%d",&n); 
for (i=1;i<=n;i++)
{
	cube =i*i*i;
}
 printf ("%d",cube);
}