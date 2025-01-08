//linear or sequential search
//two complexcity O(n) / O(1)
#include<stdio.h>
int main(){
    int a[100],key,n,i,flag;
    printf("enter a number ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a no to found");
    scanf("%d",&key);

    flag=0;
    for(i=0;i<n;i++){
        if(a[i]==key){
            flag=1;
            break;
        }
    }

    if(flag){
        printf("element is found");
    }
    else{
        printf("not found");
    }
}