#include <bits/stdc++.h>
using namespace std;

bool firstComeFirstServe(vector<int> takeOutOrders, vector<int> dineInOrders, vector<int> servedOrders) {
    int i=0,j=0;

    for (int k=0; k<servedOrders.size(); k++) {
        if (i < takeOutOrders.size() && servedOrders[k] == takeOutOrders[i]) {
            i++;
        } else if (j < dineInOrders.size() && servedOrders[k] == dineInOrders[j]) {
            j++;
        } else {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<int> takeOutOrders, dineInOrders, servedOrders;
    int num, temp;

    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cin >> temp;
        takeOutOrders.push_back(temp);
    }

    for (int i = 0; i < num; i++) {
        cin >> temp;
        dineInOrders.push_back(temp);
    }

    for (int i = 0; i < 2*num; i++) {
        cin >> temp;
        servedOrders.push_back(temp); 
    }

    cout << firstComeFirstServe(takeOutOrders, dineInOrders, servedOrders) << '\n';
}