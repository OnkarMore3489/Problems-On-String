#include<stdio.h>
void Display()
{
    printf("decimal\tHexadecimal\toctal\tcharacter\n");
    for(int i=0;i<=127;i++)
    {
        printf("%d\t%x\t%o\t%c\n",i,i,i,i);
    }
}
int main()
{
    Display();
    return 0;
}