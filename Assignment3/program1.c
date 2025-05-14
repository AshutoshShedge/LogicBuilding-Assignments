#include <stdio.h>

void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }

    int iCnt = 1;

    while (iCnt <= iNo)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d ", iCnt);
        }
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}
