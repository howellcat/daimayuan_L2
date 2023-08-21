#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n];
    long long s[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    s[0] = 0;
    for (int i = 1; i <= n; i++)
        s[i] = s[i - 1] + a[i - 1];
    for (int i = 0; i < m; i++) {
        int l, r;
        scanf("%d%d", &l, &r);
        printf("%lld\n", s[r] - s[l - 1]);
    }
}