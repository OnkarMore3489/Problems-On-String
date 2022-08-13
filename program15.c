#include<stdio.h>
#include<stdbool.h>
char ConvertSmall(char c)
{
    if((c>='A') && (c<='Z'))
    {
        return (c+32);
    }
}
int main()
{
    char ch='\0',cRet='\0';
    
    printf("Enter character : ");
    scanf("%c",&ch);
    cRet=ConvertSmall(ch);
    printf("Capital to Small : %c",cRet);
    return 0;
}