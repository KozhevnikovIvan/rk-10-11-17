#include <iostream>

using namespace std;

int main() {
  int k, n, z;
  cin >> n;
  if (n <= 0) {
    cout << "An error has occurred while reading inprut data ";
    return 0;
  }
  int m[n];
  for (k = 0; k < n; k++) {
    cin >> m[k];
  }
  cin >> z;
  int x[z - 1], y[n - z - 1];
  for (k = 0; k < z; k++) {
    x[k] = m[k];
  }
  for (k = 0; k < n - z; k++) {
    y[k] = m[k + z];
  }
  for (k = 0; k < n - z; k++) {
    cout << y[k] << " ";
  }
  for (k = 0; k < z; k++) {
    cout << x[k] << " ";
  }
  return 0;
}
