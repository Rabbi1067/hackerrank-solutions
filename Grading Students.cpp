#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a;
    cin >> n;
    while (n--) {
        cin >> a;
        if (a < 38) {
            cout << a << endl;
        } else if ((a % 5) >= 3) {
            int x = a + (5 - (a % 5));
            cout << x << endl;
        } else {
            cout << a << endl;
        }
    }
    return 0;
}
