﻿#include <stdio.h>

int main()
{
    int a;
    printf("enter the rank a\n");
    scanf("%d",&a);
    if(a<22340)
    {
     if(a<3250)
      {
        printf("he will get in all branches\n");
      }
     else 
        {
           printf("he will get in e and c and mec\n");
        }
       
    }
   else if (a>22340)
       {
        printf("admission not possible in rnsit\n ");
       } 
       
}
Output
enter the rank a
7250
he will get in ec and  and mec
 enter the rank a 
1265
he will get in all branches
enter the rank a
25000
admission not possible in RNSIT
