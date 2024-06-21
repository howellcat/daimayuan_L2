#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    vector<deque<int>> queues(n);
    for (int i = 0; i < m; i++) {
        int id, opt;
        scanf("%d%d", &id, &opt);
        if (opt == 1) {
            int x;
            scanf("%d", &x);
            queues[id - 1].push_back(x);
        } else if (opt == 2) {
            if (queues[id - 1].empty())
                printf("error\n");
            else {
                int result = queues[id - 1].front();
                queues[id - 1].pop_front();
                printf("%d\n", result);
            }
        }
    }
}