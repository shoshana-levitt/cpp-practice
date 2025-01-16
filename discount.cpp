#include <iostream>
#include <string>
using namespace std;

int main() {
  int qty;
  double discount;
  double subtotal, discountPrice, total;

  cout << "Enter the quantity of items: ";
  cin >> qty;

  subtotal = qty * 99;

  if (qty >= 10 && qty <= 19) {
    discount = 0.1;
  } else if (qty >= 20 && qty <= 49) {
    discount = 0.2;
  } else if (qty >= 50 && qty <= 99) {
    discount = 0.3;
  } else if (qty >= 100) {
    discount = 0.4;
  } else {
    discount = 0;
  }

  discountPrice = subtotal * discount;
  total = subtotal - discountPrice;

  cout << "Your discount is $" << discountPrice << " and your total is $" << total << endl;

  return 0;
}
