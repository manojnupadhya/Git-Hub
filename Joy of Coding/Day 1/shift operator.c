﻿
#include <stdio.h>
int main()
{
    int num=22;
    int n1=num<<1;
    int n2=num<<2;
    int n3=num>>1;
    int n4=num>>2;
    printf("%d<<1 is %d\n",num,n1);
    printf("%d<<2 is %d\n",num,n2);
    printf("%d>>1 is %d\n",num,n3);
    printf("%d>>2 is %d\n",num,n4);
    return 0;
}
