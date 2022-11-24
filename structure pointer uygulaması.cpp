/*Structures and typedef 
Bu  örnekte, struct  main'de bildirilir ve fonksiyona bir pointer olarak gecer.
Foksiyon, *(p).first yerine özel -> ok operatörü ile yapi  ögelerine erisebilir.
Struct, main yerine bir fonksiyon içinde bildirilirse,pointer baska bir fonksiyona oldukça kolay bir sekilde geçirilebilir.

*/

#include <stdio.h>

typedef struct MY_DATA
{
	int first;
	int second;
} MY_STRUCT;

void init_structure(MY_STRUCT *p);

int main(void)
{	
	MY_STRUCT record;
	init_structure(&record);
//	printf("\ninit_structure adres = %d ",init_structure );
}

void init_structure(MY_STRUCT *p)
{
	p->first = 100;
	p->second = 200;
	printf("first and second values = %d and %d" , p->first,p->second);

}
