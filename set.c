#include<stdio.h>
#define max 20
int main(){
    int n;
    int ch,i,j;
    int l1,l2;
    int set1[max],set2[max],setunion[max],setintersection[max],setdiff[max];
    int k,s;
    int boolean;
    printf("enter how many number ");
    scanf("%d",&l1);
    printf("enter elements in set1");
    for(i=0;i<l1;i++){
        scanf("%d",&set1[i]);
    }
    printf("enter how many number ");
    scanf("%d",&l2);
    printf("enter elements in set2");

    for(i=0;i<l2;i++){
    scanf("%d",&set2[i]);
}

    printf("\n1-union\n2-intersection\n3-difference\n4-set1-set2\n5-set2-set1");
    printf("enter choice");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        k=0;
        for(i=0;i<l1;i++){
            setunion[k]=set1[i];
            k++;
        }
        for(j=0;j<l2;j++){
            boolean=1;
            for(i=0;i<l1;i++){
                if(set2[j]==set1[i]){
                    boolean=0;
                    break;
                }
            }
            if(boolean){
                setunion[k]=set2[j];
                k++;
            }
        }
        printf("\n");
        printf("\nset union\n");
        for(i=0;i<k;i++){
            printf("%5d",setunion[i]);
        }

        case 2:
        s=0;
    
    for(j=0;j<l2;j++){
    for(i=0;i<l1;i++){
        if(set2[j]==set1[i]){
       
        setintersection[s]=set2[j];
            
            s++;
        }
        
}
    }
printf("\n");
printf("\nset intersection\n");
for(i=0;i<s;i++){
    printf("%5d",setintersection[i]);
}
 
}   
    
}    
    
