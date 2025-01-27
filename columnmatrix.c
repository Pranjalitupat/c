#include<stdio.h>
int main(){
    int r,c,i,j,sum;
    int a[50][50];

    printf("enter no of row");
    scanf("\n%d",&r);

    printf("enter no of column");
    scanf("\n%d",&c) ;

    printf("enter matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }

    printf("matrix is\n");
    for(i=0;i<r;i++)
    {   
        // sum=0;
        for(j=0;j<c;j++)
            printf("%d\t",a[i][j]);
        
        printf("\n");
    }

    for(j=0;j<c;j++)
    {   
        sum=0;
        for(i=0;i<r;i++)
            sum += a[i][j];
        
        printf("%d\t",sum);
    }
}

// 1 2 3 4 5 6  7 8 9 

