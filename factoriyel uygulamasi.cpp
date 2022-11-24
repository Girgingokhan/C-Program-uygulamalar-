// bir sayinin faktoriyelini hesaplama
#include<stdio.h>
#include<conio.h>

unsigned int factorial(int n);

int  main()
{
	 int n,i;
	 long int fact;
	 
	 printf("sayiyi girin: ");
	 scanf("%d",&n);
		 if(n==0)
		 printf("Factoriyel 0-1\n");
		 else
		 printf("Factoriyel %d %d\n",n,factorial(n));
	
	 getch();
}
/* Recursive Function*/
unsigned int factorial(int n)
{
 return n>=1 ? n * factorial(n-1) : 1;
}
