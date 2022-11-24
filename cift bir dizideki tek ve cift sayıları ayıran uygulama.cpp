/* Çift ve Tek Sayilari iki Ayri Diziye Yerlestiren C Programi*/
#include<stdio.h>
void PrintArray(int a[], int Size);
int main()
{
 int Size, i, a[5], cift[5], tek[5];
 int cift_Count = 0, tek_Count = 0;
 
 printf("\n dizinin boyutunu gir :  ");
 scanf("%d", &Size);
 
 printf("\n dizideki elemanlari gir :   ");
 for(i = 0; i < Size; i++)
 {
    scanf("%d\n", &a[i]);
 }
  
 for(i = 0; i < Size; i ++)
 {
 	if(a[i] % 2 == 0)
 	{
 		cift[cift_Count] = a[i];
 		cift_Count++;
	}
	else
	{
		tek[tek_Count] = a[i];
	 	tek_Count++;
	}
 } 
 printf("\n dizideki cift sayilarin toplam sayisi = %d ", cift_Count);
 printf("\n cift dizi elemanlari  :  ");
 PrintArray(cift, cift_Count);
 
 printf("\n dizideki tek sayilarin toplam sayisi  = %d ", tek_Count);
 printf("\n tek dizi elemanlari : ");
 PrintArray(tek, tek_Count);
 return 0;
}
void PrintArray(int a[], int Size)
{
    int i;		
    for(i = 0; i < Size; i++)
    {
      printf("%d \t ", a[i]);
    }
    printf("\n");
}

