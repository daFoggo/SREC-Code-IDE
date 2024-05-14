#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    for (int t = 0; t < 5; ++t) {
        int N;
        string A, B, C;
        cin >> N >> A >> B >> C;

        int operations = 0;

        for (int i = 0; i < N; ++i) {
            if (A[i] != B[i] && B[i] != C[i] && A[i] != C[i]) {
                operations += 2;
            } else if (A[i] != B[i] || B[i] != C[i] || A[i] != C[i]) {
                operations++;
            }
        }

        cout << operations << endl;
    }

    return 0;
}
