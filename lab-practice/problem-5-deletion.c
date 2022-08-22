#include <stdio.h>  
#include <conio.h>  
int main ()  
{   
    int arr[20];  
    int position, i,value,n, num; 
    printf ("Enter the number of elements in an array:  ");  
    scanf (" %d", &num);    
    printf ("Enter %d elements in array: \n ", num);  
    for (i = 0; i < num; i++ )  
    {   
        printf ("%d = ", i);  
        scanf (" %d", &arr[i]);  
    }    
    printf( " Enter the value thatyou want to delete:  ");  
    scanf (" %d", &value);    
    for(i=1;i<=n;i++){
        if(arr[i]==value){
            value=i;
               break;
        }
    }

    if (position >= num+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {  
        for (i = position - 1; i < num -1; i++)  
        {  
            arr[i] = arr[i+1];  
        }     
        printf (" \n The resultant array is: \n");   
        for (i = 0; i< num - 1; i++)  
        {  
            printf (" %d = ", i);  
            printf (" %d \n", arr[i]);  
        }  
    }  
    return 0;  
}  