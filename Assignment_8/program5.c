#include <stdio.h>

double SquareMeter(int iValue)
{
     double dSquMeter= 0.0;

     dSquMeter = iValue * 0.0929;

     return dSquMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    printf("Enter area in square feet");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    
    printf("%f", dRet);
    
    return 0;
}