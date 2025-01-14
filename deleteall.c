#include<stdio.h>
int main(){
    int a[100],n,key,i,j;
    int flag;
    
    printf("enter no");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("enter no to delete");
    scanf("%d",&key);
    flag =0;
    for(i=0;i<n;i++){
        if(key == a[i]){
            for(j=i;j<n-1;j++)
            a[j]=a[j+1];
            n--;
            flag =1;
            i--;
        
    }
}
if(flag){
    printf("sucessfully deleted");
}
else{
    printf("not found");
}

for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
}
