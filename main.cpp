#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n;
  if (n <= 0) {
    cout << "An error has occurred while reading inprut data ";
    return 0;
  }
  int m[n];
  for (k = 0; k < n; k++) {
    cin >> m[k];
  }
  for (k = 0; k < n; k++) {
    if (n != k) {
      cout << "An error has occurred while reading inprut data ";
      return 0;
    }

    cout << m[k] << " ";
  }
  return 0;
}