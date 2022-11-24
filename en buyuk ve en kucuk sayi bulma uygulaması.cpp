// dizinin min ve max. bulma
#include<stdio.h>
#include<conio.h>
int main()
{ 
int a[10],i,n,kucuk,buyuk;

 printf("Dizinin boyutunu girin..:");
 scanf("%d",&n);
 
 printf("Dizinin elemanlarini girin..: ");
 for(i=0;i<n;i++) // dizi elemalarini gir
 scanf("%d",&a[i]);
 
 kucuk=a[0];
 buyuk=a[0];
 
 for(i=0;i<n;i++)
 { 
	 if(a[i]<kucuk)// min elemani kontrol et
	 kucuk=a[i];
	 if(a[i]>kucuk)//max elemani kontrol et
	 buyuk=a[i];
 }
 printf("en kucuk deger :%d\n",kucuk);
 printf("en buyuk deger :%d\n",buyuk);
 getch();
}
