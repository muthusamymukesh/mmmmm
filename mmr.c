#include<stdio.h>
#include<conio.h>
void main()
{
int c, temp, rem, sum = 0,num1;
printf("\n Enter c:");
scanf("%d",&c);
for(temp =c;c!= 0;c++)
{
rem =c%10;
sum = (sum*10) + rem;
num1 = c/10;
}
if(sum == temp)
{
printf("\n %d is a Palindrome Number\n", temp);
}
else
{
printf("\n %d is not a Palindromic Integer\n", temp);
}
}
