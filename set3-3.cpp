#include <stdio.h>
struct MinMax {
    int min;
    int max;
};
struct MinMax findMinMax(int arr[], int low, int high) {
    struct MinMax result, left, right, mid;
    int midIndex;
    if (low == high) {
        result.min = result.max = arr[low];
        return result;
    }
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            result.min = arr[low];
            result.max = arr[high];
        } else {
            result.min = arr[high];
            result.max = arr[low];
        }
        return result;
    }
    midIndex = (low + high) / 2;
    left = findMinMax(arr, low, midIndex);
    right = findMinMax(arr, midIndex + 1, high);
 
    if (left.min < right.min) {
        result.min = left.min;
    } else {
        result.min = right.min;
    }
    if (left.max > right.max) {
        result.max = left.max;
    } else {
        result.max = right.max;
    }
    return result;
}
int main() {
	int arr[20],l;
	printf("Enter No of elements : ");
	scanf("%d",&l);
	printf("Enter elements : ");
	for(int i=0;i<l;i++){
		scanf("%d",&arr[i]);
	}
    struct MinMax result = findMinMax(arr, 0, l - 1);
    printf("Minimum element: %d\n", result.min);
    printf("Maximum element: %d\n", result.max);
    return 0;
}
