#include <bits/stdc++.h>

using namespace std;

int calc1(int n, int a[], int x) {
    int l = 0, r = n - 1;
    for (; l - 1 < r;) {
        int mid = (l + r) / 2;
        if (a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return l;
}

int calc2(int n, int a[], int x) {
    int l = 0, r = n - 1;
    for (; l - 1 < r;) {
        int mid = (l + r) / 2;
        if (a[mid] <= x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return l;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a + n);
    for (int i = 0; i < m; i++) {
        int x;
        scanf("%d", &x);
        int y = calc1(n, a, x);
        int z = calc2(n, a, x);
        printf("%d %d %d\n", y, z - y, n - z);
    }
}