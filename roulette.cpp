#include <iostream>
#include <string>
using namespace std;

int main() {
  int pocketNum;
  string pocketColor;

  cin >> pocketNum;

  if (pocketNum == 0) {
    pocketColor = "green";
  } else if ((pocketNum >= 1 && pocketNum <= 10) || (pocketNum >= 19 && pocketNum <= 28)){
    if (pocketNum % 2 == 0) {
      pocketColor = "black";
    } else {
      pocketColor = "red";
    }
  } else if ((pocketNum >= 11 && pocketNum <= 18) || (pocketNum >= 29 && pocketNum <= 36)) {
    if (pocketNum % 2 == 0) {
      pocketColor = "red";
    } else {
      pocketColor = "black";
    }
  } else {
    pocketColor = "Number invalid, must be between 0 and 36.";
  }

    cout << pocketColor << endl;

    return 0;
}
