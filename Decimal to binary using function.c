#include<stdio.h>
//convertion of decimal number to binary
 void toBinary(int decimal)
 {
     int binary[40];
     int index = 0;
     while(decimal > 0)
        {
         binary[index] = decimal%2;
         decimal = decimal/2;
         index++;
        }
     for(int i=index-1;i >= 0;i--)
     {
       printf("%d",binary[i]);
     }
      printf("\n");//new line
}

main()
 {
        // TODO code application logic here
   puts("Binary of 10 is: ");
   toBinary(10);
   puts("Binary of 21 is: ");
   toBinary(21);
   puts("Binary of 31 is: ");
   toBinary(31);
 }
