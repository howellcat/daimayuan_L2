#include <bits/stdc++.h>

using namespace std;

int a, b, l, answer1, answer2;
double x = 100000000;

int main() {
    scanf("%d%d%d", &a, &b, &l);
    const double n = (double) a / b;
    for (int i = 1; i <= l; i++)
        for (int j = 1; j <= l; j++) {
            double t = (double) i / j;
            if (t >= n && t - n < x) {
                x = t - n;
                answer1 = i;
                answer2 = j;
            }
        }
    printf("%d %d", answer1, answer2);
}