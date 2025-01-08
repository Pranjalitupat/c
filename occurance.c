#include<stdio.h>
int main(){
    int cnt=0;
    int a[100],i,n,key;

    printf("enter number");
    scanf("%d",&n);

    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    
    printf("enter the number for occurance");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(a[i]==key){
            cnt++;
        }
    }
    if(cnt ==0){
        printf("%d not found",key);
    }
    else{
        printf("occurance of %d is %d",key,cnt);
    }
}