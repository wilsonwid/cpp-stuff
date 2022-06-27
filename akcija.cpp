#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> p;
    
    for (int i = 0; i < N; i++) {
      int x; cin >> x; p.push_back(x);
    }

    sort(p.begin(), p.end(), greater<int>());
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        if (i % 3 != 2) sum += p[i];
    }
    cout << sum;
    return 0;
}