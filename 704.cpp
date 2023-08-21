#include <bits/stdc++.h>

using namespace std;

long long s[100001];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
        s[i] = s[i - 1] + a[i];
    for (int i = 1; i <= m; i++) {
        int l, r;
        scanf("%d%d", &l, &r);
        int L1 = 0, R1 = n + 1;
        for (; L1 + 1 < R1;) {
            int M = (L1 + R1) / 2;
            if (a[M] < l)
                L1 = M;
            else
                R1 = M;
        }
        int L2 = 0, R2 = n + 1;
        for (; L2 + 1 < R2;) {
            int M = (L2 + R2) / 2;
            if (a[M] <= r)
                L2 = M;
            else
                R2 = M;
        }
        printf("%d %lld\n", L2 - R1 + 1, s[L2] - s[R1 - 1]);
    }
}