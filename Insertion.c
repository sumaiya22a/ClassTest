#include<stdio.h>
#include<conio.h>

int main()
{
    int a[5],i,size,num,pos;
    printf("Enter the size of array: ");
    scanf("%d",&a[size]);
    printf("Enter element of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
   printf("Enter data you want to insert:");
   scanf("%d",&num);
   printf("Enter position:");
   scanf("%d",&pos);
   for(i=size;i>=pos-1;i++)
   {
       a[i+1]=a[i];
   }
   a[pos-1]=num;
   size++;
   if(pos<=0;)


}

