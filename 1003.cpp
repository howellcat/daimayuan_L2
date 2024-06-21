#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

struct info {
    int d1, d2, MAX;
} num[N];

bool cmp(info i, info j) {
    return i.d1 < j.d1;
}

int X1, Y1, X2, Y2, n;

int main() {
    scanf("%d%d%d%d%d", &X1, &Y1, &X2, &Y2, &n);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        num[i].d1 = (x - X1) * (x - X1) + (y - Y1) * (y - Y1);
        num[i].d2 = (x - X2) * (x - X2) + (y - Y2) * (y - Y2);
    }
    sort(num, num + n, cmp);
    for (int i = n - 1; i > -1; i--) {
        num[i].MAX = max(num[i].d2, num[i + 1].MAX);
    }

    int MIN = num[0].MAX;
    for (int i = 0; i < n; i++) {
        MIN = min(MIN, num[i].d1 + num[i + 1].MAX);
    }
    printf("%d\n", MIN);
    return 0;
}