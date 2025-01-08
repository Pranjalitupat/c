#include<stdio.h>
int main(){
    int a[100],i,n;
    printf("enter a number");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            printf("even no is %d\n",a[i]);
        
        }
        else{
            printf("odd no is %d\n",a[i]);

        }
    }
    return 0;
}