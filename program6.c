#include<stdio.h>
void display(char *Brr)
{
  printf("%c\n",*Brr);
  Brr++;
   printf("%c\n",*Brr);
  Brr++;
   printf("%c\n",*Brr);
  Brr++;
   printf("%c\n",*Brr);
  Brr++;
   printf("%c\n",*Brr);
  Brr++;
}
int main()
{
    char Arr[50];

    printf("Enter your name\n");
    scanf("%[^'\n']s",Arr);

    display(Arr);
    return 0;
}