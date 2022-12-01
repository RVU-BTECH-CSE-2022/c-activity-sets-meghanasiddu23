#include<stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
void main()
{
  char str1[10];
  char str2[10];
  int name;
  printf("enter the first string");
  scanf("%s",str1);
  printf("enter the second string");
  scanf("%s",str2);
  name=strcmp(str1,str2);
    if(name==1)
  {
    printf("strings are same");
  }
  else
  {
    printf("strings are not same");
  }
}
