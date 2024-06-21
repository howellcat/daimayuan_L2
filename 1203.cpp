#include <bits/stdc++.h>

using namespace std;

int n, m;

struct Node {
    int value;
    Node *next;
} *head, *tail;

int main() {
    vector<int> flag;
    head = tail = NULL;
    scanf("%d%d", &n, &m);
    vector<Node> list1(n), list2(m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &list1[i].value);
        if (head == NULL)
            head = &list1[i], tail = head;
        else
            tail->next = &list1[i], tail = &list1[i];
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &list2[i].value);
        int j = 0;
        for (Node *p = head; true; p = p->next, j++) {
            if (p == NULL) {
                if (p->value < list2[i].value)
                    p->next = &list2[i];
            } else if (p->next->value >= list2[i].value && p->value <= list2[i].value) {
                list2[i].next = p->next;
                p->next = &list2[i];
            } else if (list2[i].value < p->value && j == 0) {
                flag.push_back(i + 1);
                break;
            }
            flag.push_back(0);
        }
    }
    int j = 0;
    for (Node *p = head; p; j++) {
        if (flag[j] != 0) {
            printf("%d ", list2[flag[j] - 1].value);
        } else {
            printf("%d ", p->value);
            p = p->next;
        }
    }
}