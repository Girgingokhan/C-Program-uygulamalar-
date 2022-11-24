/* Verilen yilin artik yil olup olmadigini bulan program */
#include<stdio.h>
#include<conio.h>
int main()
{
	int yil;
	
	printf("bir yil girin..\n");
	scanf("%d",&yil);
	
	if((yil%4==0) && (yil%100!=0) || (yil%400 ==0)) //kontrol ediyoruz artik yil mi?
	{
	 printf("%d artik yil ", yil);
	}
	else
	{
	 printf("%d artik yil degil ",yil);
	}
	
	getch();
} 
