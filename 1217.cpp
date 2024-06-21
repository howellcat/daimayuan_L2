#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ticket_num = 0, answer = 0;
    scanf("%d", &n);
    vector<int> vehicle, price, time, ticket, time_price;
    for (int i = 0; i < n; i++) {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        vehicle.push_back(x), price.push_back(y), time.push_back(z);
    }
    for (int i = 0; i < n; i++) {
        int vehicle_num = vehicle[i];
        if (vehicle_num == 0) {
            ticket_num++;
            answer += price[i];
            ticket.push_back(time[i]);
            time_price.push_back(price[i]);
        } else {
            bool flag = false;
            for (int j = 0; j < ticket_num; j++)
                if (time[i] - ticket[j] <= 45 && price[i] <= time_price[j]) {
                    ticket[j] = time_price[j] = 0;
                    flag = true;
                    break;
                }
            if (!flag) answer += price[i];
        }
    }
    printf("%d", answer);
}