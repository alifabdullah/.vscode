/*/#include<stdio.h>
int main()
{
    int x=2;
    if (x=1)
    {
       printf("x is equal to 1");
    else
    {
        printf("x is not equal to 1")
    
    

    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char ch;
    printf("enter a cherecter:");
    scanf("%c",&ch);
    if ('A'<= ch&&ch <='Z' )
    {
    printf("Upper case\n");
    }
    else if ('a'<= ch&&ch <='z')
    {
        printf("lower case\n");
    }
    else
    {
        printf("Not Englis");
    }
    
    return 0;
}*/
/*#include<stdio.h>
int main()
{  
    for (int i = 0; i<=10; i+=1)//iterator =i
    {                           //i++ same to i+=1/i+1
      printf("%d\n",i);         //i++ use,then increase(postincrement)
    }                           //++i increase then use(preincrement)
    
    return 0;
}*/
/*
* main.c
* Server program for managing clients requests, settings etc.
*/
/*#include<stdio.h>
int main(){
    for (char ch='a';ch<='z' ; ch++)
    {
       printf("%c\n",ch);
    }
    return 0;
}*/
/*#include<stdio.h>
int main(){
    for (char ch='a';ch<='z' ; ch++)
    {
       printf("%c\n",ch);
    }
    
    return 0;
}*/
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



