// Quick sort in C

#include <stdio.h>

// swap fonksiyonu
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// bölüm konumunu bulma fonksiyonu
int partition(int array[], int low, int high) {
  
  // en sagdaki elemani pivot olarak sec
  int pivot = array[high];
  
  // daha buyuk eleman icin pointer
  int i = (low - 1);

  // dizinin herbir elemanini gez dolas
  // pivot ile karsilastir.
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      // eger eleman pivot tan daha kucuk ise bulundu
      // i ile gösterilen daha büyük elemanla swap yap
      i++;
      
      // i'deki ögeyi j'deki ögeyle degistir
      swap(&array[i], &array[j]);
    }
  }

  // pivot elemanini i'deki daha büyük elemanla degistir
  swap(&array[i + 1], &array[high]);
  
  // bölme noktasini return yap
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    // pivot elemanini, pivottan küçük elemanlar pivotun solunda, 
	// pivottan büyük pivot elemanlar pivotun saginda olacak sekilde bulun
    int pi = partition(array, low, high);
    
    // pivotun solundaki recursive fonk. cagrisi
    quickSort(array, low, pi - 1);
    
    // pivotun sagindaki recursive fonk. cagrisi
    quickSort(array, pi + 1, high);
  }
}

// dizinin elemanlarini yazdir
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main function
int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  
  int n = sizeof(data) / sizeof(data[0]);
  
  printf("sirali olmayan dizi\n");
  printArray(data, n);
  
  // veriler üzerinde quick sort algoritmasini gerçeklestir
  quickSort(data, 0, n - 1);
  
  printf("Artan duzende siralanmis dizi: \n");
  printArray(data, n);
}
