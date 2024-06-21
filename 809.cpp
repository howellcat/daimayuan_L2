#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        string temp = s;
        for (int j = 0; j < n; j++)
            if (s[j] == s[j + 1] + 'a' - 'A' || s[j] == s[j + 1] - 'a' + 'A') {
                s.erase(j, 2);
                n -= 2;
                j++;
            }
        if(s == temp)
            break;
    }
    for (int i = 0; i < n; i++)
        printf("%c", s[i]);
}