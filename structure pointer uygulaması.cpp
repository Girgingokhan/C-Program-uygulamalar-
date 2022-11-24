/*Structures and typedef 
Bu  �rnekte, struct  main'de bildirilir ve fonksiyona bir pointer olarak gecer.
Foksiyon, *(p).first yerine �zel -> ok operat�r� ile yapi  �gelerine erisebilir.
Struct, main yerine bir fonksiyon i�inde bildirilirse,pointer baska bir fonksiyona olduk�a kolay bir sekilde ge�irilebilir.

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
