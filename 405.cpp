#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int sum = 0;
    for (int i = a; i < b + 1; i++) {
        int x = i;
        for (; x;) {
            if (x % 10 == 2)
                sum++;
            x /= 10;
        }
    }
    printf("%d", sum);
}