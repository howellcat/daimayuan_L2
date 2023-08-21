#include <bits/stdc++.h>

using namespace std;

int num, sum;

void count(int n) {
    sum += (num / n);
    num %= n;
}

int main() {
    int n;
    scanf("%d", &n);
    num = n;
    count(100);
    count(50);
    count(10);
    count(5);
    count(1);
    printf("%d", sum);
}