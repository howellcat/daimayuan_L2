#include <bits/stdc++.h>

using namespace std;

int n, x, ans = 0;

int main() {
    scanf("%d%d", &n, &x);
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        for (int j = 1; j <= s.size(); j++)
            if (s[j - 1] - '0' == x)
                ans++;
    }
    printf("%d", ans);
}
