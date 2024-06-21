#include <bits/stdc++.h>

using namespace std;

int n, s[101][2], top = 0;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int opt;
        scanf("%d", &opt);
        if (opt == 1) {
            int x, y;
            scanf("%d%d", &x, &y);
            ++top;
            s[top][0] = x;
            s[top][1] = y;
        } else {
            if (!top)
                printf("error\n");
            else {
                printf("%d %d\n", s[top][0], s[top][1]);
                --top;
            }
        }
    }
}