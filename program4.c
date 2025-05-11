#include<stdio.h>
typedef int BOOL;
#define TRUE 0
#define FALSE 1

BOOL Check(int iNo)
{
    if((iNo % 5)== 0)
    { 
       return TRUE;
    }
    else
    {
         return 1;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);
    
    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("not divisible by 5");
    }
    return 0;
}


