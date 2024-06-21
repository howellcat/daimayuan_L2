#include <bits/stdc++.h>

using namespace std;

int N, M, pos, ans = 0;
int stair[11000][110], num[11000][110];

int main() {
    scanf("%d%d", &N, &M);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d%d", &stair[i][j], &num[i][j]);
    scanf("%d", &pos);
    for (int i = 0; i < N; i++) {
        int x = num[i][pos];
        ans = (ans + x) % 20123;
        int t = 0;
        for (int j = 0; j < M; j++)
            t += stair[i][j];
        x %= t;
        if (x == 0) x = t;
        if (stair[i][pos])
            --x;
        while (x) {
            pos = (pos + 1) % M;
            if (stair[i][pos] == 1) --x;
        }
    }
    printf("%d\n", ans);
}