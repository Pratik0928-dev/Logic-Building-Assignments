#include<stdio.h>

void Display(iNo)
{
    int iCnt=0;
    while(iNo>=iCnt)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}