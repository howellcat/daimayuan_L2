#include <bits/stdc++.h>

using namespace std;

struct Node {
    int value;
    Node *next;
} *head, *tail;

int main() {
    int n;
    scanf("%d", &n);
    vector<Node> list(n);
    for (int i = 0; i < n; i++)
        scanf("%d", &list[i].value);
    head = &list[0], tail = &list[n - 1];
}