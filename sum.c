#include<stdio.h>
int main(){
    int a[100],i,n,sum=0;
    printf("enter a no");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("sum is:%d",sum);
    return 0;
}