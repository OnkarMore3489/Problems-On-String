#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrome(char *str)
{
    char *end=NULL;
    end=str;
    while(*end!='\0')
    {
        end++;
    }
    end--;

    while(str<end)
    {
        if(*str!=*end)
        {
            break;
        }
        str++;
        end--;
    }
    if(str<end)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    char Arr[30];
    bool bRet=false;
    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);
    bRet=CheckPalindrome(Arr);
    if(bRet==true)
    {
       printf("It is Palindrome\n");
    }
    else
    {
        printf("It is Not Palindrome\n");
    }
    return 0;
}