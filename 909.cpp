#include <bits/stdc++.h>

#define size 1001

using namespace std;

int m, q[size + 1], front = 1, rear = size;

int main() {
    scanf("%d", &m);
    for (int i = 1; i <= m; i++) {
        char s[11];
        scanf("%s", s);
        if (s[0] == 'q') {
            int k;
            scanf("%d", &k);
            if(size - front + 1 >= k)
                printf("%d\n", q[front + k - 1]);
            else
                printf("%d\n",q[k - (size - front + 1)]);
        } else if (s[1] == 'u') {
            int x;
            scanf("%d", &x);
            rear = rear % size + 1;
            q[rear] = x;
        } else
            front = front % size + 1;
    }
}