/* Klavyeden girilen bir sayinin tek olup olmadigini kontrol eder */
#include <stdio.h>

enum BOOLEAN{ FALSE, TRUE }; /* 0, 1 */

int tek(int n){ 
  return (n % 2); 
}

int main()
{
	enum BOOLEAN sonuc;
	int x;
	printf("Bir sayi girin: ");
	scanf("%d",&x);
	sonuc = tek(x); /* tek mi? */
	
		if( sonuc == TRUE )
		puts("Girilen sayi tek ");
		else
		puts("Girilen sayi cift");
		return 0;
}
