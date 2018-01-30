#include<stdio.h>
#include<conio.h>
void main()
{
int c,a,u;
printf("\n Enter a:");
scanf("%d",&a);
for(c=1;c<=a;c++)
{
    if(a%2==0)
    {
    u++;
    }
}
if (u==2)
{
    printf("a is prime number.%d",a);

}
else
    {printf("a is not prime number.%d",a);
}}
