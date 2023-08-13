#include <iostream>
#include <vector>

using namespace std;

int findWinner(int n, vector<pair<int, int>>& responses) {
    int maxQuality = 0;
    int winnerIndex = -1;

    for (int i = 0; i < n; ++i) {
        int words = responses[i].first;
        int quality = responses[i].second;

        if (words <= 10 && quality > maxQuality) {
            maxQuality = quality;
            winnerIndex = i + 1; // Adding 1 to convert 0-based index to 1-based index
        }
    }

    return winnerIndex;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> responses(n);

        for (int i = 0; i < n; ++i) {
            int words, quality;
            cin >> words >> quality;
            responses[i] = make_pair(words, quality);
        }

        int winner = findWinner(n, responses);
        cout << winner << endl;
    }

    return 0;
}
