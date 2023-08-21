#include <iostream>

using namespace std;

const int p = 10007;

int n, m;

int number[100010], color[100010];
int Parity[100010][2];
int sum[100010][2];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &number[i]);
        number[i] %= p;
    }
    for (int i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);
        color[i] = x;
        Parity[x][i % 2]++;
        sum[x][i % 2] = (sum[x][i % 2] + number[i]) % p;
    }
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        int x = color[i];
        ans += i * ((sum[x][i % 2] + ((Parity[x][i % 2] - 2) * number[i] % p + p)) % p) % p;
        ans %= p;
    }
    printf("%lld", ans);
}
