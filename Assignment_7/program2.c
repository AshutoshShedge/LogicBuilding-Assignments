#include<stdio.h>
int DollarToINR(int iNo)
{
    int iCnt = 0;
    int iDollar = 70;
    int iRupee = 0;
    
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
         iRupee = iDollar * iCnt;    
    }
    return iRupee;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number of USD \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue); 

    printf("Value in INR is %d",iRet);
    return 0 ;
}