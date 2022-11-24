// bir string uzunlugunun kullanici fonks. hesabi
#include <stdio.h>

int main(void)
{
	int mesajUzunluk;
	char message[] = "TEST mesaji";
	mesajUzunluk = myMesajUzunluk(message);
	printf("mesaj uzunlugu = %i", mesajUzunluk);

}

int myMesajUzunluk(char *p)
{
	int i = 0;
	while(p[i] != 0)
	{
	  i++;
	}
	return(i);
}
