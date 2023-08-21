#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, m;
    scanf("%d%d", &l, &m);
    int a[l + 1], b[m][2];
    for (int i = 0; i < l + 1; i++)
        a[i] = i;
    int sum = l;
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i][0]);
        scanf("%d", &b[i][1]);
    }
    for (int i = 0; i < m; i++)
        for (int j = b[i][0]; j <= b[i][1]; j++)
            if (a[j] != -1) {
                sum--;
                a[j] = -1;
            }
    printf("%d\n", sum + 1);
}