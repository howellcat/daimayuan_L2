#include<bits/stdc++.h>

using namespace std;

char s[10];
int sum = 0;

int main() {
    scanf("%s", s);
    for (int i = 0; i < 8; i++)
        if (s[i] == '1')
            sum++;
    printf("%d", sum);
}