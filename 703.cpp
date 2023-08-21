#include <bits/stdc++.h>

using namespace std;

long long s[100001];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++)
        s[i] = s[i - 1] + a[i - 1];
    for (int i = 0; i < m; i++) {
        int l;
        long long x;
        scanf("%d%lld", &l, &x);
        int L = l - 1, R = n + 1;
        for (; L + 1 < R;) {
            int M = (L + R) / 2;
            if (s[M] - s[l - 1] <= x)
                L = M;
            else
                R = M;
        }
        if (L < l)
            printf("-1\n");
        else
            printf("%d\n", L);
    }
}