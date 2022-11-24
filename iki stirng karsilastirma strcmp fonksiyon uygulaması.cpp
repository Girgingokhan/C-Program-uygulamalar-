// iki karekter dizisini (stringi ) karsilastiran program

#include<stdio.h>
#include<string.h>

int main()
{
	char a[100], b[100];
	
	printf("ilk stringi girin ..\n");
	gets(a);
	
	printf("ikinci stringi girin\n");
	gets(b);
	
	if( strcmp(a,b) == 0 )
	  printf("girilen stringler esit.\n");
	else
	  printf("girilen stringler esit degil.\n");
	
	return 0;
}

/*
int compare(char a[], char b[])
{
	int c = 0;
	while( a[c] == b[c] )
	{
		if( a[c] == '\0' || b[c] == '\0' )
		break;
		c++;
		}
	if( a[c] == '\0' && b[c] == '\0' )
	  return 0;
	else
	  return -1;
}
*/
