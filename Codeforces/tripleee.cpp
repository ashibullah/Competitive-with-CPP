#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size, ans = -1;
        cin >> size;
        int arr[size];

        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        unordered_map<int, int> freqMap;

        for (int i = 0; i < size; i++) {
            freqMap[arr[i]]++;
            if (freqMap[arr[i]] >= 3) {
                ans = arr[i];
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
