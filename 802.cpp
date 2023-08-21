#include <bits/stdc++.h>

using namespace std;

int s[1000001];

int main() {
    int m;
    scanf("%d", &m);
    int top = 0;
    for (int i = 0; i < m; i++) {
        char x[11];
        scanf("%s", x);
        if(x[0] == 'q'){
            int k;
            scanf("%d", &k);
            printf("%d\n", s[top - k + 1]);
        }
        else if (x[1] == 'u') {
            int temp;
            scanf("%d", &temp);
            s[++top] = temp;
        } else
            --top;
    }
}