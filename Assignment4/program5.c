#include<stdio.h>

int FactDiff(int iNo)
{  
    int iCnt = 0;
    int iSum = 0;
    int iSum1=0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else 
        {
            iSum = iSum + iCnt;
        }
        }
    return iSum1 - iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);
    printf(" %d", iRet);
    return 0;
}
