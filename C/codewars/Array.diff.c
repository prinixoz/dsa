#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int *array_diff(const int arr1[], size_t n1, const int arr2[], size_t n2,
                size_t *z);

int main(void) {
  int a[] =  { 23, 1, 20, 11, 7, 10, 15, 9, 6, 12, 2, 17, 23, 13 };
  int n1 = 14;
  int b[] = { 9, 13, 6, -4, 4, 12, -4, -3, -2, 13, 5, 13, 13, 6 };
  int n2 = 14;
  size_t z;
  int *arrayz = array_diff(a, n1, b, n2, &z);

  printf("%i\n", arrayz[z+1]);
  for (int i = 0; i < z; i++)
    printf("%i\n", arrayz[i]);

  return 0;
}

//  assign the length of your array to *z
//  your returned array will be freed

int *array_diff(const int arr1[], size_t n1, const int arr2[], size_t n2,
                size_t *z) {

  int* newarr = calloc(n1,sizeof(int));
  size_t size = 0;

  for (int i = 0; i < n1; i++) {
    newarr[size++] = arr1[i];
    for (int j = 0; j < n2; j++) {
      if (arr1[i] == arr2[j]) 
      {
          newarr[--size] = '\0';
          break;
      }
    }
  }
    
  *z = size;
  return newarr;
}
