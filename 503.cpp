#include <bits/stdc++.h>

using namespace std;

int m, n, k, l, d, h[1001], s[1001], p[1001];

int main() {
    scanf("%d%d%d%d%d", &m, &n, &k, &l, &d);
    memset(h, 0, sizeof(h));
    memset(s, 0, sizeof(s));
    for (int i = 0; i < d; i++) {
        int x, y, p, q;
        scanf("%d%d%d%d", &x, &y, &p, &q);
        if (x == p)
            s[min(y, q)]++;
        else
            h[min(x, p)]++;
    }
    for (int i = 0; i < m; i++)
        p[i] = i;
    for (int i = 0; i < m; i++)
        for (int j = i + 1; j < m; j++)
            if (h[j] > h[i]) {
                swap(h[i], h[j]);
                swap(p[i], p[j]);
            }
    for (int i = 0; i < k; i++)
        for (int j = i + 1; j < k; j++)
            if (p[j] < p[i])
                swap(p[i], p[j]);
    for (int i = 0; i < k; i++) {
        printf("%d", p[i]);
        if (i != k)
            printf(" ");
    }
    printf("\n");

    for (int i = 0; i < n; i++)
        p[i] = i;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (s[j] > s[i]) {
                swap(s[i], s[j]);
                swap(p[i], p[j]);
            }
    for (int i = 0; i < l; i++)
        for (int j = i + 1; j < l; j++)
            if (p[j] < p[i])
                swap(p[i], p[j]);
    for (int i = 0; i < l; i++) {
        printf("%d", p[i]);
        if (i != l)
            printf(" ");
    }
}