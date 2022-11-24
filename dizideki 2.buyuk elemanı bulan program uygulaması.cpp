// bir dizideki 2.buyuk elemani veren program bobble sort algoritmasi
#include<stdio.h>

int main()
{
	
	int a[5],i,j,t;
	printf(" Bes sayi girin..\n");
	
	for(i=0;i<5;i++)
	{
	 scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[j]>a[i])
			{
			 t=a[i];
			 a[i]=a[j];
			 a[j]=t;
			}
		}
	}
	printf("\n ikinci buyuk eleman =%d\n",a[3]);
	
	for(i=0;i<5;i++)
	{
	 printf("%d\n",a[i]);
	}
}
