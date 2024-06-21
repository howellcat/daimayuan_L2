#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    vector<int> l(N);
    for (int i = 0; i < N; i++)
        scanf("%d", &l[i]);
    for (int i = 0; i < N; i++) {
        int max_index = i;
        for (int j = i + 1; j < N; j++)
            if (l[j] < l[max_index])
                max_index = j;
        swap(l[i], l[max_index]);
    }
    int last_num = 0;
    for (int i = 0; i < N; i++) {
        if (l[i] != last_num)
            printf("%d ", l[i]);
        last_num = l[i];
    }
}