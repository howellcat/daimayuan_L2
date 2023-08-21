#include<bits/stdc++.h>

using namespace std;

int n, w, i, a[30010], s = 0, j;

int main() {
    scanf("%d%d", &n, &w);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    sort(a + 1, a + n + 1, greater<int>());//降序排列
    int bj = n;
    for (i = 1; i <= n; i++) {
        if (a[i] == 0)//特殊情况
            break;
        if (i == bj)//当只剩最后一个时
        {
            s++;
            break;
        }
        if (a[i] + a[bj] <= w)//可以两个一组时
        {
            a[i] = 0;
            a[bj] = 0;
            s++;
            bj--;
        } else//一个一组
        {
            a[i] = 0;//让较大的为一组
            s++;
        }
    }

    scanf("%d", &s);
}