#include <bits/stdc++.h>

using namespace std;

int day1, day2;

int getday(int year, int month) {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return 31;
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    if (month == 2) {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            return 29;
        else
            return 28;
    }
}

int nextday(int x) {
    int year = x / 10000;
    int month = x / 100 % 100;
    int day = x % 100;
    if (day != getday(year, month))
        day++;
    else if (month != 12)
        month++, day = 1;
    else
        year++, month = 1, day = 1;
    return year * 10000 + month * 100 + day;
}

int rev(int x) {
    int answer = 0;
    while (x) {
        answer = answer * 10 + x % 10;
        x /= 10;
    }
    return answer;
}

int main() {
    int answer = 0;
    scanf("%d%d", &day1, &day2);
    for (int i = day1; i <= day2; i = nextday(i))
        if (i == rev(i))
            answer++;
    printf("%d", answer);
}