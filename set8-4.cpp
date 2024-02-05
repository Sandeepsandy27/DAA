#include <stdio.h>
#include <string.h>
#include <time.h>

void reverseString(char str[]) {
  int n = strlen(str);
  
  for(int i=0; i<n/2; i++) {
    char temp = str[i];
    str[i] = str[n-i-1];
    str[n-i-1] = temp;
  }
}

int main() {
  char str[100];

  printf("Enter a string: ");
  scanf("%s", str);

  clock_t start = clock();
  reverseString(str);  
  clock_t end = clock();

  double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

  printf("Reversed string is: %s\n", str);

  printf("Time taken to reverse string is %f seconds\n", time_taken);

  printf("Time Complexity: O(n) where n is length of string");

}
