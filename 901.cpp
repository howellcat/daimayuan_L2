#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> s;
    int front = 0, rear = 0;
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        string x;
        cin >> x;
        if (x == "push") {
            int y;
            scanf("%d", &y);
            s.resize(rear + 2);
            s[rear] = y;
            rear++;
        } else if (x == "pop")
            front++;
        else if (x == "query") {
            int y;
            scanf("%d", &y);
            printf("%d\n", s[front + y - 1]);
        }
    }
}