﻿#include <stdio.h>

int main()
{
    int a,x;
    printf("enter the number of blue books a\n");
    scanf("%d",&a);
    if(a>20000)
    {
     if(a>10000&&a<15000)
      {
        printf("hey you got 10% discount!!!\n");
      }
     else if(a>15000&&a<20000)
        {
           printf("hey you got 20% discount!!!\n");
        }
       
    }
   else if (a<10000)
       {
        printf(" no discount!!!\n ");
       } 
     
     x=10*a;
     printf("the total cost x=%d ",x);
}
OUTPUT
enter the number of blue books a 
8245
no discount!!!
the total cost x=82450
Test case 2
 enter the number of blue books a
12450
hey you got 10% discount!!!
the total cost x=11205
