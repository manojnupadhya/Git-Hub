#include <stdio.h>
#include <stdlib.h>
void  main()
{
    int op1,op2,res;
    char oper;
    printf("enter the value of operator\n");
    scanf("%c",&oper);
    printf("enter the value of operands\n");
    scanf("%d%d",&op1,&op2);
    switch(oper)
    {
        case '+': res=op1+op2;
            break;
        case '-': res=op1-op2;
            break;
        case '*': res=op1*op2;
            break;  
        case '/': if(op2==0)
            {
                printf("divide by zero error");
                exit (0);
            }
            else
            {
                res = op1/op2;
            }
            break;
        default: printf("not a valid operator\n");
        exit (0);
    }
        printf("the result is = %d",res);
}

Output:
 Enter the value of operator 
+
Enter the value of operands
6
6

The result is = 12

enter the value of operator 
-
Enter the value of operands
7
2
The result is =5


enter the value of operator 
*
Enter the value of operands
8
2
The result is = 16

enter the value of operator 
/
Enter the value of operands
9
3
The result is = 3

enter the value of operator 
#
Enter the value of operands
7
3
Not a valid operator

