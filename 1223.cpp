#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int inf = 1000000000;
int k;

ll mysqrt(ll x) {
    if (x < 0) return -1;
    ll l = sqrt(x);
    if (l * l == x) return l;
    return -1;
}

int main() {
    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        ll n, e, d;
        scanf("%lld%lld%lld", &n, &e, &d);
        ll m = n - e * d + 2;
        ll y = mysqrt(m * m - 4 * n);
        if (y == -1) {
            printf("NO\n");
        } else {
            ll p = (m - y) / 2, q = (m + y) / 2;
            if (p * q == n && p + q == m && p > 0 && q > 0) {
                printf("%lld %lld\n", p, q);
            } else {
                printf("NO\n");
            }
        }
    }
}