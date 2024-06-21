#include <bits/stdc++.h>

using namespace std;

int main() {
    int ans = 0;
    int n;
    scanf("%d", &n);
    if (n % 2 == 1) {
        printf("-1");
        return 0;
    }
    for (int k = 30; k >= 0; k--) {
        if ((n & (1 << k)) != 0)
            printf("%d ", 1 << k);
    }
}