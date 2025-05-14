#include<stdio.h>

void Number(int iNo)
{
    //Time Complexity O(1)
    if (iNo < 50)
    {
        printf("Small");
    }
    else if (iNo >= 50 && iNo < 100)
    {
        printf("Medium");
    } else if (iNo >= 100)
    {
        printf("Large");
    } 
}
int main()
{
    int iValue = 0;
    
    printf("Enter number \n");
    scanf("%d",&iValue);
    
    Number(iValue);
    
    return 0;
}