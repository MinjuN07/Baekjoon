#include <iostream>
using namespace std;
int i, j, a[10001];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> j;
    while (cin >> i) {
        a[i]++;
    }
    for (i = 0; i < 10001; i++) {
        if (!a[i]) continue;
        for (j = 0; j < a[i]; j++) {
            cout << i << '\n';
        }
    }
    return 0;
}