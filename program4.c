#include<stdio.h>
void display(char Brr[])
{
  printf("you Entered : %s",Brr);
}
int main()
{
    char Arr[50];

    printf("Enter your name\n");
    scanf("%[^'\n']s",Arr);

    display(Arr);
    return 0;
}