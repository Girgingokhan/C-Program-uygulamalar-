/*  Bir yapi isaret eden pointer */
#include <stdio.h>

struct Meyve{
	float agirlik;
	float fiyat;
};

int main()
{
	struct Meyve *muz, elma;
	float muzTutar, elmaTutar;
	
	/* muz Meyve tipinde bir gösterici */
	muz->agirlik = 2.50;
	muz->fiyat = 3.50;
	muzTutar = muz->fiyat * muz->agirlik;
	
	/* elma Meyve tipinde bir degiþken */
	elma.agirlik = 2.00;
	elma.fiyat = 1.75;
	elmaTutar = elma.fiyat * elma.agirlik;
	
	printf("Meyve Agirlik Birim Fiyati TUTAR (TL)\n");
	printf("----- ------- ------------ ----------\n");
	printf("Muz  %7.2f %7.2f %7.2f\n", muz->agirlik, muz->fiyat, muzTutar);
	printf("Elma %7.2f %7.2f %7.2f\n", elma.agirlik, elma.fiyat, elmaTutar);
	return 0;
}
