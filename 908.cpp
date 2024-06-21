#include <bits/stdc++.h>

#define size 101

using namespace std;

int n, m, q[size + 1], front = 1, rear = size;

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        rear = rear % size + 1;
        q[rear] = i;
    }
    int x = 0;
    while (rear % size + 1 != front) {
        int y = q[front];
        front = front % size + 1;
        ++x;
        if (x == m) {
            printf("%d ", y);
            x = 0;
        } else {
            rear = rear % size + 1;
            q[rear] = y;
        }
    }
}