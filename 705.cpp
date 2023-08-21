//#include <bits/stdc++.h>
//
//using namespace std;
//
//long long calc(int x, int n, const int b[], const int k[]) {
//    long long sum = 0;
//    for (int i = 0; i < n; i++)
//        if (b[i] <= x)
//            sum += (x - b[i]) / k[i] + 1;
//    return sum;
//}
//
//int main() {
//    int n, m;
//    scanf("%d", &n);
//    int k[n], b[n];
//    for (int i = 0; i < n; i++)
//        scanf("%d%d", &k[i], &b[i]);
//    scanf("%d", &m);
//    int l = 0, r = 1000000000;
//    while (l + 1 < r) {
//        int mid = (l + r) / 2;
//        if (calc(mid, n, b, k) < mid)
//            l = mid;
//        else
//            r = mid;
//    }
//    printf("%d\n", r);
//}

#include <bits/stdc++.h>

using namespace std;

int n, m, k[100001], b[100001];

long long calc(int x) {
    long long sum = 0;
    for (int i = 0; i < n; i++)
        if (b[i] <= x)
            sum += (x - b[i]) / k[i] + 1;
    return sum;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d%d", &k[i], &b[i]);
    scanf("%d", &m);
    int l = 0, r = 100000000;
    while (l + 1 < r) {
        int mid = (l + r) / 2;
        if (calc(mid) < m)
            l = mid;
        else
            r = mid;
    }
    printf("%d\n", r);
}