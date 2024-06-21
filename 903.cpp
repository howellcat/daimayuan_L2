#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, k;
    scanf("%d%d", &x, &k);
    queue<int> q;
    q.push(x);
    for (int i = 0; i < k; i++) {
        printf("%d ", q.front());
        q.push(2 * q.front());
        q.push(2 * q.front() + 1);
        q.pop();
    }
}