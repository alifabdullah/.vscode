#include<stdio.h>
int main(){
    int age;
    
    printf("enter age:");
    scanf("%d",&age);
    if(age>18){
        printf("Adult\n");
        printf("can drive\n");
        printf("can vote\n");

    }
    else{
        printf("Not Adult\n");
    }
    printf("Thank you");
    return 0;
}