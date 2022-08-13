#include<stdio.h>
#include<stdbool.h>
char ConvertCapital(char c)
{
    if((c>='a') && (c<='z'))
    {
        return (c-32);
    }
}
int main()
{
    char ch='\0',cRet='\0';
    
    printf("Enter character : ");
    scanf("%c",&ch);
    cRet=ConvertCapital(ch);
    printf("small to capital : %c",cRet);
    return 0;
}