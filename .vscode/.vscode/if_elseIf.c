#include<stdio.h>
int main(){
    int mark;
    
    printf("enter mark:");
    scanf("%d",&mark);
    if(mark<=33){
        printf("FAil\n");
        ;
    }
    else if(mark>=80){
        printf("A+\n");
    }
    else if(mark>=70){
        printf("A\n");
    }
    else if(mark>=60){
        printf("A-\n");
    }
    else if(mark>=50){
        printf("B\n");
    }
    else if(mark >=33){
        printf("Pass\n");
    }
    
    printf("Thank you");
    return 0;
}