#include<stdio.h>
main()
{ //program to check  prime number between 1 and 100
    int num,i,j;
    char isprime='y';
  for(num=1;num<=100;num++)
   {
       for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
                {
                    isprime='n';
                    break;
                }

        }
        if(isprime=='y')
            {printf("\t %d",num);
            }
      isprime='y';
   }
}


