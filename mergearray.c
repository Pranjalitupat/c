#include<stdio.h>
int main(){
    int n,m,i,j,o;
    int a[100],b[100],c[100];
    int temp;

    printf("enter an number");
    scanf("%d",&n);

    printf("enter an element in array1");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("enter an number");
     scanf("%d",&m);
    printf("enter an element in array2");
    for(j=0;j<m;j++){
    scanf("%d",&b[j]);
    }
     for(i=0;i<n;i++){
     for(j=0;j<n-i-1;j++){
         if(a[j]>a[j+1]){
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
         }
     }
        }
    printf("after sorting");
     for(i=0;i<n;i++)
     printf("\n%d",a[i]);

      for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
         if(b[j]>b[j+1]){
         temp=b[j];
         b[j]=b[j+1];
         b[j+1]=temp;
        }
    }
}
printf("\nafter sorting");
 for(i=0;i<n;i++)
 printf("\n%d",b[i]);


     for(i=0;i<n;i++){
    
        for(j=0;j<m;j++){

            if(a[i]<=b[j]){
                c[o]=a[i];
                o++;
            }
            else{
                
                c[o]=b[j];
                o++;
            }
        }
    }

    printf("\nafter 3 sorting");
    for(i=0;i<o;i++)
        printf("\n%d",c[i]);
        return 0;
     



}