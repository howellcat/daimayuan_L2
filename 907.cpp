#include <bits/stdc++.h>

using namespace std;

int n, q[101], front = 1, rear = 0;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int opt, x;
        scanf("%d%d", &opt, &x);
        if (opt == 1)
            q[++rear] = x;
        else {
            int sum = 0;
            while (rear >= front) {
                int y = q[front];
                sum++;
                front++;
                if (y == x)
                    break;
            }
            printf("%d\n", sum);
        }
    }
}