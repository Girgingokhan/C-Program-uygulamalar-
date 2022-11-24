//verilen stringin palindrome olup olmadigini veren program
#include <stdio.h>
#include <string.h>

int main()
{
 char string[25], reverse_string[25] = {'\0'};
 int i, length = 0, flag = 0;

 printf("bir string girin.. \n");
 gets(string);
 
 for (i = 0; string[i] != '\0'; i++)
 {
   length++;
 }
 
 printf("verilen stringin uzunlugu '%s' = %d\n", string, length);
 for (i = length - 1; i >= 0 ; i--)
 {
    reverse_string[length - i - 1] = string[i];
 }
 
 for (flag = 1, i = 0; i < length ; i++)
 {
	 if (reverse_string[i] != string[i])
	 flag = 0;
 }
 
 if (flag == 1)
 printf ("%s palindrome \n", string);
 else
 printf("%s palindrome degil \n", string);
}
