#include <bits/stdc++.h>

using namespace std;

int a[1000], c[1000], sum[1000];

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < q; i++) {
        int l, r;
        scanf("%d%d", &l, &r);
        c[l - 1]++;
        c[r]--;
    }
    sum[0] = 0;
    for (int i = 0; i < n; i++)
        sum[i] = sum[i - 1] + c[i];
    for (int i = 0; i < n; i++)
        printf("%d ", a[i] + sum[i]);
}