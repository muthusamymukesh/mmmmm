#include <stdio.h>
int main()
{ int a[100],b,i,j,t=0;
scanf("%d",&b);
for(i=0;i<b;i++)
  scanf("%d",&a[i]);
for(i=0;i<b;i++)
 if(a[i]>a[i+1])
 {t=a[i];
 a[i]=a[i+1];
 a[i+1]=t;
 }
 printf("%d",a[i/2]);
    return 0;
}
