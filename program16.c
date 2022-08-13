#include<stdio.h>
#include<stdbool.h>
char CharToggle(char c)
{
    if((c>='a') && (c<='z'))
    {
        return (c-32);
    }
    else if((c>='A') && (c<='Z'))
    {
         return (c+32);
    }
}
int main()
{
    char ch='\0',cRet='\0';
    
    printf("Enter character : ");
    scanf("%c",&ch);
    cRet=CharToggle(ch);
    printf("Toggle letter is : %c",cRet);
    return 0;
}