#include<stdio.h>
int CountFreq(char *str,char ch)
{
    int iCnt=0;
    if(str==NULL)
    {
        return -1;
    }
     while(*str!='\0')
     {
         if(*str==ch)
         {
             iCnt++;
         }
         str++;
     }
     return iCnt;
}
int main()
{
    char Arr[30];
    char cValue='\0';
    int iRet=0;
    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);
    printf("Enter the character : ");
    scanf(" %c",&cValue);               //space is there
    iRet=CountFreq(Arr,cValue);
    printf("Frequency of character is : %d\n",iRet);
    return 0;
}