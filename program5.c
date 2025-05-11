#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    int rValue = 2;
    if((iNo % rValue ) ==0)
    {
       printf("This is even number/n");
        return TRUE;
    }
    else
    {   
       printf("This is odd number/n");
        return FALSE;
    }

}

int main()
{
    int iValue =0;
    BOOL bRet = FALSE;

    printf("Enter Number :");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    printf("The Reminder is :%d",bRet);
    return 0;
}