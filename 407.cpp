#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    vector<int> a(0, 0);
    int temp;
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        a.push_back(temp);
    }
    vector<int> b(0, 0);
    for (int i = 0; i < m; i++)
        b.push_back(a[i]);
    for (int i = m; i < n; i++) {
        int pos = 1;
        for (int j = 0; j < m; j++)
            if (b[j] < b[pos])
                pos = j;
        b[pos] += a[i];
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
        ans = max(ans, b[i]);
    printf("%d\n", ans);
}