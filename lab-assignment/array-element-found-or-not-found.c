#include <stdio.h>
int main()
{
    int n;
    printf("Please input size : ");
    scanf("%d", &n);
    int a[n], i, newindex, value;

    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array elements : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    int newSize=n;

    for (int j = 0; j < 2; j++)
    {
        int check=0;
        printf("\nEnter the value  you want to delete ");
        scanf("%d", &value);
        for (i = 0; i < n; i++)
        {
            if (a[i] == value)
            {
                newindex = i;
                check=1;
                newSize--;
                for (i = newindex; i <= n - 1; i++)
                {
                    a[i] = a[i + 1];
                }
            }
            
        }
    if (check==0)
    {
         printf("value  not found\n");

    }
}

    
   
    printf("After delete   : ");
    for (i = 0; i < newSize; i++)
        printf("%d ", a[i]);
    return 0;
}