#include <bits/stdc++.h>

using namespace std;

int n, s[101], top = 0;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int opt, x;
        scanf("%d%d", &opt, &x);
        if (opt == 1)
            s[++top] = x;
        else{
            int tot = 0;
            while (top){
                int y = s[top];
                --top;
                ++tot;
                if (x == y)
                    break;
            }
            printf("%d\n", tot);
        }
    }
}