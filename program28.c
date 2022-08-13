#include<stdio.h>
#include<stdbool.h>
void StrrevX(char *start)
{
    char temp='\0';
    char *end=NULL;
    end=start;

    while(*end!='\0')
    {
        end++;
    }
    end--;
    
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
}
int main()
{
    char Arr[30];
    
    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);

    StrrevX(Arr);

    printf("Reverse string is :%s\n",Arr);
    return 0;
}