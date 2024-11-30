//           problem link
//   https://codeforces.com/contest/1851/problem/A

#include <bits/stdc++.h>
using namespace std;
const int N = (int)1e6 + 5;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define INF (ll)1e16




int main() {
    Faster;
    int t;                  cin >> t;
    while (t--) {
        ll n, m, k, h;          cin >> n >> m >> k >> h;

        vector<ll> a(n);
        for (int i = 0;i < n;i++) {
            cin >> a[i];
        }

        int ans = 0;
        for (int i = 0;i < n;i++) {
            bool ok = false;
            for (ll x = 1;x <= m;x++) {
                for (ll y = x + 1LL;y <= m;y++) {
                    if (x == y)continue;
                    ll hDiff = abs(a[i] - h);
                    ll sDiff = y - x;
                    sDiff *= k;
                    ok |= (hDiff == sDiff);
                }
            }
            ans += (ok);
        }

        cout << ans << endl;
    }
    return 0;
}
