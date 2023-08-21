#include <bits/stdc++.h>

using namespace std;

#define M 20005

int t[M], g[M];
int a[105], ans = 0, maxn = 0;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        g[a[i]] = 1;
    }
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++) {
            t[a[i] + a[j]]++;
            maxn = max(maxn, a[i] + a[j]);
        }
    for (int i = 0; i < maxn; i++)
        if (t[i] > 0 && g[i])
            ans++;
    printf("%d", ans);
}