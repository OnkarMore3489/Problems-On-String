#include<stdio.h>
#include<stdbool.h>
void swap(char *p,char *q)
{
  char temp;
  temp=*p;
  *p=*q;
  *q=temp;
}
int main()
{
   char ch1,ch2;
   printf("Enter the characters : ");
   scanf("%c",&ch1);
   scanf(" %c",&ch2);

   printf("Before swapping character %c %c\n",ch1,ch2);

   swap(&ch1,&ch2);

   printf("After swapping character %c %c\n",ch1,ch2);
}