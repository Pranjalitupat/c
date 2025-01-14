#include<stdio.h>
int main(){
    int a[100],i,bn=0,n,cn=0;
    int b[100];
    int c[100];
    printf("enter a no");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]%2==0){
            b[bn]=a[i];
            bn++;
        
        }
        else{
            c[cn]=a[i];
            cn++;
        

        }
    }
    if(bn!=0){
        printf("even no");
        for(i=0;i<bn;i++){
            printf("%d ", b[i]);
        }
    }
    if(cn!=0){
        printf("odd no");
        for(i=0;i<cn;i++){
            printf("%d ", c[i]);
            

        }
    }

    
    
}