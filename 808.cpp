#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    stack<int> b;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int s = 0;
    for (int i = 0, j = 1; s < 2 * n; s++) {
        if (!b.empty() && a[i] == b.top()) {
            printf("pop\n");
            b.pop();
            i++;
        } else {
            printf("push %d\n", j);
            b.push(j);
            j++;
        }
    }
}