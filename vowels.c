#include<stdio.h>
int main(){
    char ch;
    printf("enter any character");
    scanf("%c",&ch);
    if((ch =='a') || (ch == 'e') || (ch == 'i') ||(ch == 'o')|| (ch == 'u'))
    {
        printf("it is small vowels");
    }
    else if((ch =='A') || (ch == 'E') || (ch == 'I') ||(ch == 'O')|| (ch == 'U'))
{
    printf("it is capital vowels");
}

else if((ch >=65) && (ch <=90)){
    printf("it is capital character");
}

else if((ch >=97) && (ch <=122)){
    printf("it is small character");
}
else if((ch >=48) && (ch <=57)){
    printf("it is number");
}
    else{
        printf("it is other charcter");
    }
}