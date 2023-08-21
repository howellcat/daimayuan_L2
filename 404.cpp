#include <bits/stdc++.h>

using namespace std;

int main() {
    char n[23];
    scanf("%s", n);
    int sum = 0;
    for (int i = 0, j = 0; i < 12; i++) {
        if (n[i] == '-')
            continue;
        sum += ((n[i] - '0') * (j + 1));
        j++;
    }
    sum %= 11;
    if (n[12] - '0' == sum && sum != 10) {
        printf("Right");
        return 0;
    }
    if (sum == 10)
        if (n[12] == 'X') {
            printf("Right");
            return 0;
        }
    for (int i = 0; i < 12; i++)
        printf("%c", n[i]);
    if (sum == 10) {
        printf("X");
        return 0;
    }
    printf("%d", sum);
}
