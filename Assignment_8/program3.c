#include <stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 1000;

    iMeter = iNo * iMeter;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance ");

    scanf("%d", &iValue);
    iRet = KMtoMeter(iValue);

    printf("%d", iRet);

    return 0;
    }