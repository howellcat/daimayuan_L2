#include <bits/stdc++.h>

using namespace std;

#define MAX 1005

int book[MAX], p[10];
int n, q, len, code;

void init() {
    p[0] = 1;
    for (int i = 1; i <= 7; i++)
        p[i] = p[i - 1] * 10;
}

int main() {
    init();
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; i++)
        scanf("%d", &book[i]);
    sort(book, book + n);
    for (int i = 0; i < q; i++) {
        scanf("%d%d", &len, &code);
        bool flag = false;
        for (int j = 0; j < n; j++) {
            if (book[j] % p[len] == code) {
                printf("%d\n", book[j]);
                flag = true;
                break;
            }
        }
        if(!flag) printf("-1\n");
    }
}