#include <bits/stdc++.h>

using namespace std;

int a[101][1001], top[101];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++) {
        int opt, id;
        scanf("%d%d", &id, &opt);
        if (opt == 1) {
            int x;
            scanf("%d", &x);
            a[id][++top[id]] = x;
        } else {
            if (!top[id])
                printf("error\n");
            else {
                printf("%d\n", a[id][top[id]]);
                top[id]--;
            }
        }
    }
}