#include <iostream>
using namespace std;

#define int long long

signed main() {
    string s, t;
    cin >> s >> t;

    int ans = 1e18;
    for(int i = 0; i < s.size() - t.size() + 1; i++) {
        int cnt = 0;
        for(int j = 0; j < t.size(); j++) {
            if(s[j + i] != t[j]) cnt++;
        }
        ans = min(ans, cnt);
    }

    cout << ans << endl;
    return 0;
}
