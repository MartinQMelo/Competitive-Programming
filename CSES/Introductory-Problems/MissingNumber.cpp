#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long n;
    cin >> n;

    vector<long long> vet(n - 1);
    for(int i = 0; i < n - 1; i++) {
        cin >> vet[i];
    }
    sort(vet.begin(), vet.end());
    
    for (int i = 0; i < n; i++) {
        if (i + 1 != vet[i]) {
            cout << i + 1 << "\n";
            return 0;
        }
    }
}