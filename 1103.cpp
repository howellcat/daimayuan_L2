#include <bits/stdc++.h>

using namespace std;

int n, m;

struct Node {
    int value;
    Node *next;
} *h1, *t1, *h2, *t2, a[1000000], b[1000000];

Node *Merge(Node *x, Node *y) {
    Node *h3 = NULL, *t3 = NULL;
    while (x && y) {
        if (x->value < y->value) {
            if (h3 == NULL)
                h3 = t3 = x;
            else {
                t3->next = x;
                t3 = x;
            }
            Node *p = x;
            x = x->next;
            p->next = NULL;
        } else {
            if (h3 == NULL)
                h3 = t3 = y;
            else {
                t3->next = y;
                t3 = y;
            }
            Node *p = y;
            y = y->next;
            p->next = NULL;
        }
    }

    while (x) {
        t3->next = x;
        t3 = x;
        Node *p = x;
        x = x->next;
        p->next = NULL;
    }
    while (y) {
        t3->next = y;
        t3 = y;
        Node *p = y;
        y = y->next;
        p->next = NULL;
    }
    return h3;
}

int main() {
    scanf("%d%d", &n, &m);
    h1 = t1 = NULL;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i].value);
        h1 == NULL ? h1 = t1 = &a[i] : t1->next = &a[i], t1 = &a[i];
    }
    t2 = h2 = NULL;
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i].value);
        h2 == NULL ? h2 = t2 = &b[i] : t2->next = &b[i], t2 = &b[i];
    }
    Node *h3 = Merge(h1, h2);
    for (Node *p = h3; p; p = p->next)
        printf("%d ", p->value);
}