#include<stdio.h>
int main(){
    int n,a[100],b[100],c[100];
    int i,j;
    printf("enter n");
    scanf("%d",&n);

    printf("enter array element");
    for(i=0;i<n;i++){
        scanf("%d",a[i]);
    }

    for(i=0;i<n;i++){
        b[100]=a[i]*a[i];
    }
}