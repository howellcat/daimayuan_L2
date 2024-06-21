#include<bits/stdc++.h>

using namespace std;

vector<int> num, index_num;
map<int, int> pos_num;

bool cmp(const int &a, const int &b) {
    if (num[a] != num[b]) return num[a] < num[b];
    return a < b;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int tmp;
        scanf("%d", &tmp);
        num.push_back(tmp);
        index_num.push_back(i);
    }

    sort(index_num.begin(), index_num.end(), cmp);

    for (int i = 0; i < n; i++)
        printf("%d ", num[index_num[i]]);
    printf("\n");
    for (int i = 0; i < n; i++)
        pos_num[index_num[i]] = i + 1;
    for (int i = 0; i < n; i++)
        printf("%d ", pos_num[i]);
    printf("\n");
    return 0;
}