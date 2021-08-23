#include<iostream>
using namespace std;
main()
{ //program to check  prime number
    int num,i,j;
    char isprime='y';
    cout<<"enter any number ";
    cin>>num;

       for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
                {
                    isprime='n';
                    break;
                }

        }
        if(isprime=='y')
            {cout<<"number is prime";
            }
        else
            cout<<"Number is not prime ";

}


