#include<stdio.h>
#include<stdbool.h>
int CapitalCount(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char ch[50];
    int iRet=0;
    printf("Enter the String : ");
    scanf("%[^'\n']s",ch);
    iRet=CapitalCount(ch);
    printf("Number of small character : %d",iRet);
    return 0;
}