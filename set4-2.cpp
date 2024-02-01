#include <stdio.h>
void merge(int nums1[], int m, int nums2[], int n, int output[]) {
  int i = 0, j = 0, k = 0;
  
  while (i < m && j < n) {
    if (nums1[i] < nums2[j]) {
      output[k++] = nums1[i++];
    }
    else {
      output[k++] = nums2[j++]; 
    }
  }
  
  while (i < m) {
    output[k++] = nums1[i++];
  }
  
  while (j < n) {
    output[k++] = nums2[j++];
  }
}

int main() {

  int m, n;
  printf("Enter size of first array: ");
  scanf("%d", &m);
  int nums1[m];
  
  printf("Enter elements in sorted order: ");
  for(int i=0; i<m; i++) {
    scanf("%d", &nums1[i]);
  }  

  printf("Enter size of second array: ");
  scanf("%d", &n);
  int nums2[n];
  
  printf("Enter elements in sorted order: ");
  for(int i=0; i<n; i++) {
    scanf("%d", &nums2[i]);
  }

  int output[m+n];

  merge(nums1, m, nums2, n, output);

  printf("Merged array: ");
  for(int i=0; i<m+n; i++) {
    printf("%d ", output[i]); 
  }
  printf("\n");
  printf("Time complexity: O(m+n)");

  return 0;
}
