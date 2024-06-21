#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    vector<vector<int>> g(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            g[i][j] = (c == '*');
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!g[i][j]) {
                int count = 0;
                for (int k = 0; k < 8; k++) {
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if (x >= 0 && x < n && y >= 0 && y < m && g[x][y]) count++;
                }
                printf("%d", count);
            } else
                printf("*");
        }
        printf("\n");
    }
}