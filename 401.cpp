#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    int n;
    scanf("%d", &n);
    n += 30;
    for (int i = 0; i < 10; i++) {
        int min_index = i;
        for (int j = min_index; j < 10; j++)
            if (a[j] < a[min_index])
                min_index = j;
        if (a[min_index] > n) {
            printf("%d", i);
            return 0;
        }
        swap(a[min_index], a[i]);
    }
}