#include<stdio.h>
int main(){
    int a[5]={2,5,6},i, n=3,newv1=100,newv2=300;
    printf("Ënter the value of 1: ");
    n++;
    for(i=n-1;i>=2;i--){
        a[i]=a[i-1];
    }
    a[1]=newv1;
    n++;
    for(i=n-1;i>=2;i--){
    a[i]=a[i-1];
    }
    a[1]=newv2;
    for(i=0;i<n;i++){
        printf("Your array is : %d", a[i]);
    }
    return 0;
}