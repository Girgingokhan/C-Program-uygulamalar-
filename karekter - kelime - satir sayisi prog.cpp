//verilen bir metindeki satir, kelime ve karakter sayisini sayan program
#include <stdio.h>
#include <string.h>


 
int main()
{
 char satir[81], ctr;
 int i,c, end = 1,

 int karekterler = 0;
 int kelimeler   = 0;
 int satirlar    = 0;
 
 printf("her kelimeden sonra bir bosluk ver.\n");
 
 while( end == 1)
 {
	 /* metin satir okunuyor */
	 c = 0;
	 while((ctr=getchar()) != '\n')
	 satir[c++] = ctr;
	 satir[c] = '\0';
	 
	 /* bir satirdaki kelimeleri sayiyor */
	 if(satir[0] == '\0') // yeni satirda enter yapilirsa donguden cikar sonuclari ekrana yazar.
	     break ;
	 else
	 {
		 kelimeler++;
		 for(i=0; satir[i] != '\0';i++)
		 if(satir[i] == ' ' || satir[i] == '\t')
		 kelimeler++;
	 }
	 /* satir ve karekterler sayiliyor */
	 satirlar = satirlar +1;
	 karekterler = karekterler + strlen(satir);
 }
 printf ("\n");
 printf("satir sayisi = %d\n", satirlar);
 printf("kelime sayisi = %d\n", kelimeler);
 printf("karekter sayisi = %d\n", karekterler);
}
