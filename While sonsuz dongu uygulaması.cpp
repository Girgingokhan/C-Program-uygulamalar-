// iki sayiyi art arda toplama programi
#include<stdio.h>

int main()
{
	int a, b, c; 
	char ch;
	while(1)
	{
		printf("iki sayinin degerini girin..\n"); 
		scanf("%d%d",&a,&b);
		c = a + b;
		printf("a + b = %d\n", c);
		printf("daha fazla sayi eklemek ister misiniz.. (E/H)\n"); 
		scanf(" %c",&ch);
		
		if(ch == 'e' || ch =='E' ) 
		  continue;
		else if(ch == 'h'|| ch == 'H')
		  break;
	}
   return 0;
}
