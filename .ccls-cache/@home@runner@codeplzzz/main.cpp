#include <iostream>
using namespace std;
int main() {

  int j;
  int arry[] = {2, 5, 1, 4, 8, 0, 8, 5, 0, 1};
  int count = 0;

  for (int i = 0; i < 11; i++) {

    cout << "Hello World!\n";

    for (j = 0; j < 11; j++) {

      if (arry[i] > arry[j]) {

        count++;
        break;
      }
    }
  }

  cout << count;
}