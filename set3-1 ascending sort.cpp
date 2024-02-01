#include <stdio.h>
int binarySearch(int nums[], int n, int target) {
  int low = 0;
  int high = n - 1; 
  
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (nums[mid] == target) {
      return mid;
    }
    if (target < nums[mid]) {
      high = mid - 1; 
    } else {
      low = mid + 1;
    }
  }

  return -1;
}

int main() {
  
  int n;
  printf("Enter size of array: ");
  scanf("%d", &n);
  
  int nums[n];
  printf("Enter the elements in sorted order: ");
  for(int i=0; i<n; i++) {
    scanf("%d", &nums[i]);
  }

  int target;
  printf("Enter the element to search: ");
  scanf("%d", &target);

  int index = binarySearch(nums, n, target);

  if(index != -1) {
    printf("Element found at index %d", index);
  } else {
    printf("Element not found in array");
  }

  return 0;
}
