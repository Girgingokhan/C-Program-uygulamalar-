//  Array'den eleman çikarma
#include <stdio.h>

int main()
{
   int array[100], position, c, n;

   printf("Array'deki eleman sayisini girin\n");
   scanf("%d", &n);

   printf(" %d adet eleman girin\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Array'den cikarilacak elemanin konumunu girin\n");
   scanf("%d", &position);

   if (position >= n+1)
      printf("Cikarmak mumkun degil.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];

      printf("Array'in son hali:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d\n", array[c]);
   }

   return 0;
}
