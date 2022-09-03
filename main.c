#include <stdio.h>
#include <stdlib.h>

#include "Head.h"
int main()
{
    int x = 10;
    int y = 20;
    int Summation = 0;
    int multiplycation = 0;
    int *p = NULL;
    if(sum_values(x,y,&Summation) == ERROR_OK)
    {
       printf("Sum of %d & %d = %d\n",x,y,Summation);
    }
    else
    {
        printf("invalid Address\n");

    }

     if(Muliply_values(x,y,&Summation) == ERROR_OK)
    {
       printf("Muliply of %d & %d = %d\n",x,y, multiplycation);
    }
    else
    {
        printf("invalid Address\n");

    }

    return 0;
}
