#include <iostream>
using namespace std;

#define int long long

signed main() {
    int d, t, s;
    cin >> d >> t >> s;
    cout << (1.0 * d / s <= t ? "Yes" : "No") << endl;
    return 0;
}
