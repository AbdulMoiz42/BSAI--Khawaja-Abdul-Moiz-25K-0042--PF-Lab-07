#include<stdio.h>
int main()
{
   int i;
   char str[100];
   printf("Enter the string: ");
    scanf("%[^\n]", str); //read until new line

   for ( i = 0; str[i]!='\0'; i++)
   {
    if (str[i]>='A'&&str[i]<='Z')
    {
        str[i]+=32; //uppercase to lowercase
    }
    else if (str[i]>='a'&&str[i]<='z')
    {
       str[i]-=32; //lowercase to uppercase
    }

   }

   printf("\n Converted message: %s",str);
   
   return 0;
}