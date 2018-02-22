#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value a:");
    scanf("%d",&a);
    if(a%2==0)
    {
    printf("\nThe %d is power of 2.",a);
    }
    else
    {
     printf("\nThe %d is not a power of 2.",a);
    }
}
