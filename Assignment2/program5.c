#include <stdio.h>

#define TRUE 0
#define FALSE -1

typedef int BOOL;

BOOL ChkEven(int iNo)
{
     if (iNo % 2 == 0)
     {
       return TRUE;
     }
     else 
     {
       return FALSE;
     }
    
}
 
int main()
{ 
    int iValue = 0;

    BOOL bRet = FALSE;

    printf("Enter number");

    scanf("%d" ,& iValue);

    bRet = ChkEven( iValue);

    if (bRet == FALSE) 
    {
        printf("%d is odd number ", iValue);
    } 
    else 
    {
         printf("%d is even number ", iValue);
    }

return 0;
}