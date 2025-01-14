#include<stdio.h>
int main(){
    for(int i=5;i>=1;i--){

        int st=1;
        for(int j=1;j<=5-i;j++){

            printf("  ");

        }
        for(int k=1;k<=st;k++){
            printf(" * ");
        }
        printf("\n");
        st=st-2;
        printf("\n");

    }
}
