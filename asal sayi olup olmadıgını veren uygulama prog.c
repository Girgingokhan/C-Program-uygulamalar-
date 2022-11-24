//asal sayi olup olmadigini bulan program
#include<stdio.h>
int main()
{
	int n, c = 2;
	printf("bir sayi girin..\n"); 
	scanf("%d",&n);
	
	for ( c = 2 ; c <= n - 1 ; c++ )
	{
		if ( n%c == 0 )
		{
		  printf("%d asal degil.\n", n); 
		  break;
		}
	}
	
	if ( c == n )
	printf("%d asal.\n", n);
	
	return 0;
}
