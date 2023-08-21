#include <bits/stdc++.h>

using namespace std;

int n, m, a[100001];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    for (int i = 1; i <= m; i++) {
        int x;
        scanf("%d", &x);
        int l = 0, r = n + 1;
        for (; l + 1 < r;) {
            int mid = (l + r) / 2;
            if (a[mid] < x)
                l = mid;
            else
                r = mid;
        }
        if (r <= n && a[r] == x)
            printf("Yes\n");
        else
            printf("No\n");
    }
}