#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, a[110];
    scanf("%d", &n);
    for (int i = n; i >= 0; i--)
        scanf("%d", &a[i]);
    for (int i = n; i >= 0; i--) {
        if (a[i] == 0) continue;
        if (a[i] > 0) {
            if (i != n)
                printf("+");
        } else
            printf("-");

        int flag = abs(a[i]);
        if (flag != 1) {
            printf("%d", flag);
        } else {
            if (i == 0) printf("%d", flag);
        }

        if (i >= 2) printf("x^%d", i);
        else if (i == 1) printf("x");
    }
}