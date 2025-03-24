#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Please enter a positive integer:" << endl;
    cin >> num;

    int totalLines = num * 2;
    for (int i = 1; i <= totalLines; i++) {
      int spaces = (2 * num) - i;
      for (int j = 1; j <= spaces; j++) {
        cout << " ";
      }
      for (int k = 1; k <= i; k++) {
        cout << "*";
      }
      cout << endl;
    }
}
