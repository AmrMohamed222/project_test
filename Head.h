#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

typedef enum
{
    ERROR_OK,
    ERROR_NOK
}Error_state;

Error_state sum_values(int a,int b,int *value);
Error_state Muliply_values(int a, int b, int* value);

#endif // HEAD_H_INCLUDED
