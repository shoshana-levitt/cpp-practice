#include <iostream>
using namespace std;

void printNums(int n);
int factorial(int n);

int main() {
  // printNums(10);
  cout << factorial(5);
  return 0;
}

/* Prints nums 10 to 1 decreasing */
void printNums(int n) {
  if (n > 0) {
    cout << n << endl;
    printNums(n - 1);
  }
}

int factorial(int n) {
  if (n > 1) {
    return n * factorial(n - 1);
  } else {
    return 1; // base case
  }
}