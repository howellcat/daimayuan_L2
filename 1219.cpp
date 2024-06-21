#include <bits/stdc++.h>

using namespace std;

int n, w, x, size = 0, people[605];

int main() {
    scanf("%d%d", &n, &w);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        people[x]++;
        int sum = 0;
        for (int j = 600; j >= 0; j--) {
            sum += people[j];
            if (sum >= max(1, (i + 1) * w / 100)) {
                printf("%d ", j);
                break;
            }
        }
    }
    return 0;
}