#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("enter three numbers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if (n1<n2&&n2<n3)
    {
      printf("middle one %d",n2);
    }
    else if (n1>n2&&n3>n1/* condition */)
    {
       printf("middle one %d",n1); /* code */
    }
    else
    {
        printf("middle one %d",n1); /* code *//* code */
    }
    
}