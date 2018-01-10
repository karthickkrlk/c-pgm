#include<conio.h>
#include<stdio.h>
void main()
{
int a,b,c;
printf("\nEnter any three number ");
scanf("%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("\n The largest number %d",&a);
}
elseif((b>a)&&(b>c))
{
printf("\n The largest number %d",&b);
}
elseif((c>a)&&(c>b))
{
printf("\n The largest number %d",&c);
}
getch()
}
