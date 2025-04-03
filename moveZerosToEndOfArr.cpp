#include <iostream>
using namespace std;

void moveZeros(int *arr, int arrSize);

int main() {
  int arr[] = {0, 2, 0, 1, 0};
  int arrSize = sizeof(arr) / sizeof(arr[0]);
  moveZeros(arr, arrSize);
  for (int i = 0; i < arrSize; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}

void moveZeros(int *arr, int arrSize) {
  int idx = 0;
  for (int i = 0; i < arrSize; i++) {
    if (arr[i] > 0) {
      arr[idx] = arr[i];
      idx++;
    }
  }
  for (int i = idx + 1; i < arrSize; i++) {
    arr[i] = 0;
  }
}
