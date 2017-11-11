#include <iostream>
using namespace std;

int main()
{
    int n, k, j, x, y, z;
    cin >> x >> y;
    int m[x][y];
    for (k = 0; k < x; k++)
        for (j = 0; j < y; j++)
            cin >> m[k][j];
    k = j = 0;
    cin >> n;
    for (z = 0; z < n; z++)
        while (true) {
            swap(m[0][0], m[k][j]);
            if (k == 0 && j == y - 1) {
                k++;
                continue;
            }
            else if (k == 0) {
                j++;
                continue;
            }
            if (k == x - 1 && j == y - 1) {
                j--;
                continue;
            }
            else if (j == y - 1) {
                k++;
                continue;
            }
            if (k == x - 1 && j == 0) {
                k--;
                continue;
            }
            else if (k == x - 1) {
                j--;
                continue;
            }
            if (k == 1 && j == 0) {
                k = j = 0;
                break;
            }
            else if (j == 0) {
                k--;
                continue;
            }
        }
    for (k = 0; k < x; k++) {
        for (j = 0; j < y; j++)
            cout << m[k][j] << " ";
        cout << endl;
    }
    return 0;
}
