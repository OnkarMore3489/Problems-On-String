#include<stdio.h>
#include<stdbool.h>
int SmallCount(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
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
    iRet=SmallCount(ch);
    printf("Number of small character : %d",iRet);
    return 0;
}