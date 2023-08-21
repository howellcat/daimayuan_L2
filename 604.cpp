#include <bits/stdc++.h>

using namespace std;

int n, m, a[100001];
long long s[100001], t[100001];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    s[0] = 0;
    for (int i = 1; i <= n; i++)
        s[i] = s[i - 1] + a[i - 1];
    t[0] = 0;
    for (int i = 1; i <= n; i++)
        t[i] = min(t[i - 1], s[i]);
    long long ans = -1LL << 60LL;
    for (int i = m; i <= n; i++)
        ans = max(ans, s[i] - t[i - m]);
    printf("%lld", ans);
}