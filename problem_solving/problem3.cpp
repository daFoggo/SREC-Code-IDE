#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<pair<int, int>> happiness[4];

    for (int i = 0; i < 4; ++i) {
        int N;
        cin >> N;
        happiness[i].resize(N);
        for (int j = 0; j < N; ++j) {
            cin >> happiness[i][j].first >> happiness[i][j].second;
        }
    }

    for (int i = 0; i < 4; ++i) {
        long long takahashi_happiness = 0;
        long long aoki_happiness = 0;

        sort(happiness[i].begin(), happiness[i].end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return (a.first - a.second) > (b.first - b.second);
        });

        for (int j = 0; j < static_cast<int>(happiness[i].size()); ++j) {
            if (j % 2 == 0) {
                takahashi_happiness += happiness[i][j].first;
            } else {
                aoki_happiness += happiness[i][j].second;
            }
        }

        cout << takahashi_happiness - aoki_happiness << endl;
    }

    return 0;
}
