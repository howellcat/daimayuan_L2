#include <bits/stdc++.h>

using namespace std;

long long calc(long long x, const int a[], int n) {
    long long sum = 0;
    for (int i = 0; i < n; i++)
        if (a[i] <= x)
            sum += x - a[i];
    return sum;
}

int main() {
    int n;
    long long k;
    scanf("%d%lld", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    long long l = 1, r = (long long) 1e13 + (long long) 1e8 + 1;
    while (l + 1 < r) {
        long long mid = (l + r) / 2;
        if (calc(mid, a, n) <= k)
            l = mid;
        else
            r = mid;
    }
    printf("%lld\n", l);
    return 0;
}