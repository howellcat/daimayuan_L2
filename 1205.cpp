#include <bits/stdc++.h>

using namespace std;

string word, sentence, sum[10000000];
int last = 0, size = 0, cnt = 0, ans = 0, first_last;

bool compare_ignore_case_char(char a, char b) {
    return tolower(a) == tolower(b);
}

bool compare_ignore_case_string(string &a, string &b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++)
        if (!compare_ignore_case_char(a[i], b[i]))
            return false;
    return true;
}

int pos(int word_pos) {
    for (int i = 0; i < word_pos; i++)
        first_last += sum[i].size() + 1;
    return first_last;
}

int main() {
    getline(cin, word);
    getline(cin, sentence);
    for (int i = 0; i <= sentence.size(); i++) {
        if (sentence[i] == ' ' || i == sentence.size()) {
            sum[cnt] = sentence.substr(last, size);
            cnt++;
            last = i + 1;
            size = 0;
        } else
            size++;
    }
    for (int i = 0; i < cnt; i++)
        if (compare_ignore_case_string(sum[i], word)) {
            if (ans == 0) first_last = pos(i);
            ans++;
        }
    if (ans == 0) {
        printf("-1\n");
        return 0;
    }
    printf("%d %d", ans, first_last);
}