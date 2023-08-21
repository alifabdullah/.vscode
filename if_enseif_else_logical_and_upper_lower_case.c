#include<stdio.h>
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
}