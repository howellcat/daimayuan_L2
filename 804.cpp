#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, top = 0, s[100000] = {0};
    string str;
    cin >> n >> str;
    for (int i = 0; i < n; i++) {
        if (top && s[top] == str[i])
            top--;
        else
            s[++top] = str[i];
    }
    for (int i = 1; i <= top; i++)
        printf("%c", s[i]);
}