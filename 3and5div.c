#include<stdio.h>
int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);

    if(num%3==0 && num%5==0){
        printf("it is divisible by 3 and 5");
    }
    else if(num%3==0)
    {
        printf("it divisible by 3 ");
    }
    else if(num%5 == 0){
        printf("it is divisible by 5");

    }
    else{
        printf("it is not divisible by 3 or 5");
    }
}
