typedef int BOOL;
#include <stdio.h>
#include <stdbool.h>
#define TRUE 1 ;
#define FALSE 0 ;

BOOL DisplayConvert ( char CValue)
{
    if( CValue == 'A' || CValue == 'E'|| CValue == 'I' || CValue == 'O'|| CValue == 'U'
    || CValue == 'a' || CValue == 'e'|| CValue == 'i' || CValue == 'o'|| CValue == 'u'  )
    {
        return TRUE;
    }
    else
    {
        FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = false;

    printf("enter value : \n");
    scanf(" %c", &cValue);

    bRet = DisplayConvert(cValue);

    if(bRet == true)
    {
        printf("It is vowel ");
    }
    else 
    {
        printf("It is not vowel ");
    }
    return 0;
}