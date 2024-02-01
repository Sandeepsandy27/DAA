#include <stdio.h>

int sumOfDigits(int num) {
  int sum = 0;
  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int main() {

  int n;
  printf("Enter size of array: ");
  scanf("%d", &n);

  int nums[n];
  printf("Enter array elements: ");
  for(int i=0; i<n; i++) {
    scanf("%d", &nums[i]);
  }

  int maxSum = 0;

  for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
      if(sumOfDigits(nums[i]) == sumOfDigits(nums[j])) {
        if(nums[i] + nums[j] > maxSum) {
          maxSum = nums[i] + nums[j];
        }
      }
    }
  }

  printf("Maximum sum is: %d", maxSum);

  return 0;
}
