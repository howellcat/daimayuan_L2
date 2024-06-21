#include <bits/stdc++.h>

using namespace std;

int n, L, R;

int main() {
    scanf("%d%d%d", &n, &L, &R);
    printf("%d", L / n == R / n ? R % n : n - 1);
}