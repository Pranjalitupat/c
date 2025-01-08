//array is itself pointer
// array store data of similar datatypes
//using array we can do call by references
//syntax a[100] a= arrayname 100=arraysize
//10-0 ,20-2,30-3,40-4 1d array or indexeed array
//lower bound is 0 and uper is n-1
//random  value acess is possible
#include<stdio.h>
int main(){
    int a[100],i,n;
    printf("enter a no");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
    return 0;
}