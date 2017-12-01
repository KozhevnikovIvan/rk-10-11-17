#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n;
  if (n <= 0) {
    cout << "An error has occurred while reading input data ";
    return 1;
  }
  int*m = new int[n];
  for (k = 0; k < n; k++) {
    cin >> m[k];
  }
  for (k = 0; k < n / 2; k++) {
    swap(m[k], m[n - k - 1]);
  }
  for (k = 0; k < n; k++) {
    cout << m[k] << " ";
  }

  delete [] m;
}
