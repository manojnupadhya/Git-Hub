﻿#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the value of a b c \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>0,b>0,c>0)
    {
     if(a>c)
      {
        if (a>b)
        {
             printf("the largest is a=%d\n",a);
        }
        else
        {
            printf("the largest is b=%d\n",b);
        }
      }    
    else 
     {
        printf("the largest is c=%d\n",c);
     } 
    }
    Else if(a<0,b<0,c<0)
    {
        printf("invalid number in input");
    }

}
OUTPUT
Test case 1
enter the value of a b c  
156
345
0
the largest is b=345
Test case 2
enter the value of a b c  
253
-34
0
invalid number in input
Test case 3
enter the value of a b c  
254
456
123
the largest is b=456
Test case 4
enter the value of a b c  
244
244
244
the largest is 244
Test case 5
enter the value of a b c  
123
-32
456
invalid number in input
