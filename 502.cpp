#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int max_index = i;
        for (int j = i; j < n; j++)
            if (a[j] > a[max_index])
                max_index = j;
        sum += a[max_index];
        if (sum >= k) {
            printf("%d\n", i + 1);
            return 0;
        }
        swap(a[i], a[max_index]);
    }
    printf("-1");
}