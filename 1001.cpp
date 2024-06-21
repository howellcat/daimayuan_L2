#include <bits/stdc++.h>

using namespace std;

int cmp(const int &a, const int &b) {
    return a > b;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}