#include<stdio.h>
int main(){
    int id,n1,n2,n3,total,per;
    char name[10];

    printf("enter the id");
    scanf("%d",&id);

    printf("enter a student name");
    scanf("%s",&name);

    printf("enter marks");
    scanf("%d%d%d",&n1,&n2,&n3);

    printf("student id %d\n:",id);
    printf("student mark of sub1%d\n:",n1);
    printf("student mark of sub2%d\n:",n2);
    printf("student mark of sub3%d\n:",n3);
    printf("student per%d\n:",per);
    
    printf("student total mark%d\n:",total);
    


    total =n1+n2+n3;
    per = total/3;

    if(n1 > 40 && n2 >40 && n3>40)
    {
        printf("student is pass\n");
    }
    else{
        printf("student is fail\n");

    }

    if(per>40 && per <=60){
        printf("student is pass\n");
        printf("student grade is: C");
    }
    else if (per >60 && per<75)
    {
        printf("student grade is: B");

    }
    else{
        printf("student grade is: A");

    }
}