#include <stdio.h>


void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}


int main() {
  int size;
  printf("enter size of array");
  scanf("%d",&size);
  int a[size];
  printf("Enter elements ");
  for(int i=0;i<size;i++){
    scanf("%d",&a[i]);    
  }
 
  insertionSort(a, size);
  printf("Sorted array in ascending order:\n");
  printArray(a, size);
}
