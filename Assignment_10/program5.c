#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenNo = 0; 
    int iOddNo = 0;

    while(iNo != 0 )  
    {
        iDigit = iNo % 10; 
        if (iDigit %2 == 0)
        {
            iEvenNo += iDigit;        
        }
        else 
        {
            iOddNo += iDigit;
        }
        iNo = iNo / 10;
    }

     return iEvenNo - iOddNo;
}

int main()
{
int iValue = 0;
int iRet = 0;

printf("Enter number");

scanf("%d",&iValue);

iRet = CountDiff(iValue);

printf("%d",iRet);

return 0;
}