#include <iostream>
#include <string>
using namespace std;

int factorial(int n);
string reverseString(string input);
bool isPalindrome(string input);
int sumNums(int n);

int main() {
  // cout << factorial(5);
  int result = sumNums(5);
  cout << result;
  return 0;
}

int factorial(int n) {
  if (n <= 1) {
    return 1;
  }
  return n * factorial(n - 1);
}

string reverseString(string input) {
  if (input == "") {
    return "";
  }
  return reverseString(input.substr(1) + input[0]);
}

bool isPalindrome(string input) {
  if (input.size() == 0 | input.size() == 1) {
    return true;
  }
  if (input[0] == input[input.size() - 1]) {
    return isPalindrome(input.substr(1, input.size() - 1));
  }
  return false;
}

int sumNums(int n) {
  if (n <= 1) {
    return n;
  }
  return n + sumNums(n - 1);
}