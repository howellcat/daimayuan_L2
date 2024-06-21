#include <bits/stdc++.h>

using namespace std;

const int inf = 1000000000;
int a, b;

int main() {
    scanf("%d%d", &a, &b);
    long long c = 1;
    if (a == 1) {
        printf("1\n");
        return 0;
    }
    for (int i = 1; i <= b; i++) {
        c *= a;
        if (c > inf) {
            printf("-1\n");
            return 0;
        }
    }
    printf("%lld\n", c);
    return 0;
}