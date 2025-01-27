#include<stdio.h>
#include<math.h>
int main(){
    int n,arr[100],i,brr[100],pn=0;
    int num,boolean;

    printf("enter an number");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    pn=0;
    for(i=0;i<n;i++){
        num =arr[i];

         boolean =1;
                                    
    for(int j=2;j<=sqrt(num);j++)
    {
        if(num%j==0){
            boolean=0;
            break;
        }
    }
    
    
    if(boolean){
        brr[pn] = num;
        pn++;
    }
    }
    if(pn>0){
        for(i=0;i<pn;i++){
       printf("%5d",brr[i]);
    }
    }


}