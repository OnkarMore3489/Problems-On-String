#include<stdio.h>
#include<stdbool.h>
int SpaceCount(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if((*str==' '))
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
    iRet=SpaceCount(ch);
    printf("number of white spaces is : %d",iRet);
    return 0;
}