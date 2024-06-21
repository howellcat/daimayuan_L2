#include <bits/stdc++.h>

using namespace std;

struct student {
    int Chinese, Mathematics, English;
    int tot, id;
};

bool cmp(student a, student b) {
    if (a.tot != b.tot)
        return a.tot > b.tot;
    else if (a.Chinese != b.Chinese)
        return a.Chinese > b.Chinese;
    else
        return a.id < b.id;
}

int main() {
    int n;
    scanf("%d", &n);
    student stu[n];
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &stu[i].Chinese, &stu[i].Mathematics, &stu[i].English);
        stu[i].tot = stu[i].Chinese + stu[i].Mathematics + stu[i].English;
        stu[i].id = i + 1;
    }
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (cmp(stu[j], stu[i]))
                swap(stu[j], stu[i]);
    for (int i = 0; i < 5; i++)
        printf("%d %d\n", stu[i].id, stu[i].tot);
}
