#include <bits/stdc++.h>

using namespace std;

#define min -1000003;

int a[100001];

int main() {
    int n;
    long long max_sum;
    scanf("%d", &n);
    max_sum = min;
    long long temp_sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (temp_sum > -1) temp_sum += a[i];
        if (temp_sum < 0) temp_sum = a[i];
        max_sum = max(max_sum, temp_sum);
    }

    printf("%lld", max_sum);
}
