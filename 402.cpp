#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int a[3][2];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
    int sum = INT_MAX;
    for (int i = 0; i < 3; i++) {
        int num = n / a[i][0] != 0 ? n / a[i][0] + 1 : n / a[i][0];
        num *= a[i][1];
        if (num < sum)sum = num;
    }
    printf("%d", sum);
}
