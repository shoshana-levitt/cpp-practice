#include <iostream>
using namespace std;

int main(){
  int i, j, k;
  i = 10;
  j = 5;

  k = i++ - ++j;
  k--;

  cout<<k<<endl;

  return 0;
}