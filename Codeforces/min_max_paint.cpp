#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isDullPair(vector<int>& a, vector<int>& b) {
    int n = a.size();

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            if ((b[i] - a[i]) % 2 != 0) {
                return false;
            }
            int diff = (b[i] - a[i]) / 2;
            a[i] += diff;
            b[i] -= diff;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        bool isDull = isDullPair(a, b);

        if (isDull) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
