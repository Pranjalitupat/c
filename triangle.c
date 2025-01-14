#include<stdio.h>
int main(){
    int st=1;
    for(int i=1;i<5;i++){

        for(int j=1;j<=5-i;j++){

            printf("  ");

        }
        for(int k=1;k<=st;k++){
            printf(" * ");
        }
        printf("\n");
        st=st+2;
        printf("\n");

    }
    
}
