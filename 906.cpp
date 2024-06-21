#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++) {
        int opt;
        scanf("%d", &opt);
        if (opt == 1) {
            int x, y;
            scanf("%d%d", &x, &y);
            q.emplace(x, y);
        } else if (opt == 2) {
            if (!q.empty()) {
                pair<int, int> front = q.front();
                q.pop();
                printf("%d%c%d\n", front.first, ' ', front.second);
            } else {
                printf("error\n");
            }
        }
    }
}
