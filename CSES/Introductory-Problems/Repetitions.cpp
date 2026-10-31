#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string DNA;
    cin >> DNA;
    int maxCount = 1;
    int count = 1;
    
    for (int i = 0; i < DNA.length(); i++) {
        if (DNA[i] == DNA[i+1]) {
            count ++;
        }
        else {
            count = 1;
        }

        if (count > maxCount) {
            maxCount = count;
        }
    }
    cout << maxCount;
}