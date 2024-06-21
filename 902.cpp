#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    string s[n];
    for (int i = 0, j = 0; i < n; i++) {
        int opt;
        scanf("%d", &opt);
        if (opt == 1) {
            string x;
            cin >> x;
            s[j] = x;
            j++;
        } else {
            int k = 0;
            for (; k < j && k < 10; k++)
                printf("%c ", s[k][0]);
            printf("\n");
            j -= k;
        }
    }
}