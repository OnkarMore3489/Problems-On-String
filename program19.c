#include<stdio.h>
#include<stdbool.h>
void Count(char *str)
{
    int Ccount=0,Scount=0;
    while(*str!='\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
            Ccount++;
        }
        else if((*str>='a') && (*str<='z'))
        {
            Scount++;
        }
        str++;
    }
    printf("Small letters are : %d\n",Scount);
    printf("Capital letters are : %d\n",Ccount);
}
int main()
{
    char ch[50];
    printf("Enter the String : ");
    scanf("%[^'\n']s",ch);
    Count(ch);
    
    return 0;
}