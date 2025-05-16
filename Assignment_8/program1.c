#include <stdio.h>

double CircleArea(float fRadius) 
{
    float fPiValue = 3.14f;
    double dArea = 0.0;

    dArea = fPiValue * fRadius * fRadius;

    return dArea;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f",&fValue);
    
    dRet = CircleArea(fValue);
    
    printf("%.4f", dRet);
    
    return 0;
}