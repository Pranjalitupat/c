#include<stdio.h>
int main()
{
  int a[100],i,j,n,pos,key;

    printf("enter a number");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter position");
    scanf("%d",&pos);

    if(pos >= 0 && pos <= n){
        printf("enter a value");
        scanf("%d",&key);

        for(i=n;i>pos;i--)
            a[i]=a[i-1];
            a[pos-1]=key;
            n++;
        
    

    printf("\n after insertion");
    for(i=0;i<n;i++)
    printf("\n%d",a[i]);
    }
    else{
        printf("position invalid");
    }
    return 0;
}