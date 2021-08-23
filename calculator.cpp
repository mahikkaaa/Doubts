//Program for four function calculator
#include<stdio.h>
main()
{
    char ch;
    int num1,num2,result;
    printf("Enter operator (+,-,*,/)");
    ch=getchar();// function to accept single character

    printf("Enter first number ");
    scanf("%d",&num1);
    printf("Enter second number ");
    scanf("%d",&num2);


    if(ch=='+')
    {
      result=num1+num2;
      printf("\n%d",result);

    }
    else if(ch=='-')
    {
      result=num1-num2;
      printf("\n%d",result);
    }
    else if(ch=='*')
    {
      result=num1*num2;
      printf("\n%d",result);
    }
    else 
    {
      if(num2=0)
    	result=0;
      else 
    	result=num1/num2;
    printf("\n%d",result);
    }
}
