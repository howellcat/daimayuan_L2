#include <bits/stdc++.h>

using namespace std;

struct Node {
    int value;
    Node *next;
} *head = NULL;

int main() {
    int n;
    scanf("%d", &n);
    vector<Node> list(n);
    for (int i = 0; i < n; i++)
        scanf("%d", &list[i].value);
    for (int i = 0; i < n; i++) {
        if (head == NULL)
            head = &list[i];
        else if (list[i].value < head->value) {
            list[i].next = head;
            head = &list[i];
        } else {
            Node *p = head;
            for (Node *v = head; v; v = v->next)
                if (list[i].value > v->value)
                    p = v;
                else
                    break;
            list[i].next = p->next;
            p->next = &list[i];
        }
    }
    for(Node *p = head; p; p = p->next)
        printf("%d ", p->value);
}