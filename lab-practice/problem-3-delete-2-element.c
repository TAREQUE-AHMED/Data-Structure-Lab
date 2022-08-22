#include<stdio.h>
 int main()
{
int a[10], i, newindex, n, value1, value2;
printf("please enter array size less than 10: \n");
scanf("%d", &n);
printf("Enter %d array elements ", n);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
printf("array elements are :\n");
for (i = 0; i < n; i++)
printf("%d ", a[i]);



printf("Enter first value you want to delete:\n ");
scanf("%d", &value1);

printf("Enter second value you want to delete:\n ");
scanf("%d", &value2);

for (i = 0; i < n; i++)
{
if (a[i] == value1)
{
newindex = i;
for (i = newindex; i <= n - 1; i++)
{
a[i] = a[i + 1];
}
}
}

for (i = 0; i < n; i++)
{
if (a[i] == value2)
{
newindex = i;
for (i = newindex; i <= n - 1; i++)
{
a[i] = a[i + 1];
}
}
}

// for (i = newindex; i <= n - 1; i++)
// {
// a[i] = a[i + 1];
// }

printf("New elements of the array are : ");
for (i = 0; i < n - 2; i++)
printf("%d ", a[i]);
return 0;
}