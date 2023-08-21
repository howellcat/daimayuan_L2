#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a + n);
    int sum = 0;
    int i = -1;
    for (; i < n && sum < k;) {
        i++;
        sum += a[i];
    }
    printf("%d\n", i);
}