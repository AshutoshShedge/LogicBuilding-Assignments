#include<stdio.h>

int MultFact(int iNo)
{   
    int iCnt = 0 , iSum = 1;
    
    for(iCnt = 2; iCnt <= iNo / 2 ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {  
            iSum = iSum * iCnt;
        }
    }
    return iSum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);
    printf(" Multiplication of factors is %d", iRet);
    return 0;
}
