#include <bits/stdc++.h>

using namespace std;

int n, a[10000000], indexn[10000000], timen[10000000], front = 0, rear;

int main() {
    scanf("%d", &n);
    rear = n - 1;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        indexn[i] = i;
    for (int t = 0; rear >= front; t++) {
        int x = indexn[front];
        ++front;
        --a[x];
        if (!a[x])
            timen[x] = t + 1;
        else
            indexn[++rear] = x;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", timen[i]);
}

