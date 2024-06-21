#include <bits/stdc++.h>

using namespace std;

int n, q;
int ans[8100];
struct number {
    int val, pos;
} a[8100];

bool operator<(number aa, number bb) {
    return (aa.val < bb.val) || (aa.val == bb.val && aa.pos < bb.pos);
}

int main() {
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i].val);
        a[i].pos = i;
    }
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (a[j] < a[i])
                swap(a[j], a[i]);
    for (int i = 1; i <= n; i++)
        ans[a[i].pos] = i;
    for (int i = 0; i < q; i++) {
        int op;
        scanf("%d", &op);
        if (op == 2) {
            int x;
            scanf("%d", &x);
            printf("%d\n", ans[x]);
        } else {
            int x, y;
            scanf("%d%d", &x, &y);
            int tmp = ans[x];
            a[tmp].val = y;
            number tmp2 = a[tmp];
            for (int j = tmp; j < n; j++)
                a[j] = a[j + 1];
            a[n] = tmp2;
            for (int j = n; j >= 2; j--)
                if (a[j] < a[j - 1])
                    swap(a[j], a[j - 1]);
                else
                    break;
            for (int j = 1; j <= n; j++)
                ans[a[j].pos] = j;
        }
    }
}