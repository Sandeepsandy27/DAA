#include <stdio.h>
#include <time.h>
int linearSearch(int arr[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return i;
    }
  }
  return -1;
}

int main() {

  int n, key;
  
  printf("Enter size of array: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter elements in array: ");
  for(int i=0; i<n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Enter key to search: ");
  scanf("%d", &key);

  clock_t start = clock();
  int index = linearSearch(arr, n, key);
  clock_t end = clock();

  double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

  if(index != -1) {
    printf("Element found at index %d", index);
  } else {
    printf("Element not found");
  }

  printf("\nTime taken by linear search is %f seconds", time_taken);
  
  // Time complexity
  printf("\nTime Complexity: O(n)");

  return 0;
}
