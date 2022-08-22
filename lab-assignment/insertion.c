#include<stdio.h> 
int main(){
int size,i;
printf("Enter the array size: ");
scanf("%d",&size);
printf("Enter the element of array: ");
int arr[size];
for ( i = 0; i < size; i++)
{
scanf("%d",&arr[i]);
}
for (i = 0; i < size; i++)
{
printf("%d ",arr[i]);
}

printf("\nEnter new value : ");
int newValue;

int pos=2;

for ( i = 0; i < 2; i++)
{ 
size++;

scanf("%d",&newValue);

for ( i = size; i > pos-1; i--)
{
arr[i]=arr[i-1];
}

arr[pos-1]=newValue;
}



for (i = 0; i < size; i++)
{
printf("%d ",arr[i]);
}

return 0;
}