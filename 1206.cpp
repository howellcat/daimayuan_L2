#include <bits/stdc++.h>

using namespace std;

int MIN = INT_MAX, ans = 1;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        printf("%d", n / 2);
        return 0;
    }
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            ans *= i;
            MIN = min(MIN, i);
            n /= i;
        }
    }
    printf("%d", ans / MIN);
}