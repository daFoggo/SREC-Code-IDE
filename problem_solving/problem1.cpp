#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    for (int i = 0; i < 5; ++i) {
        int N, A, B;
        cin >> N >> A >> B;
        
        cout << min(A, B) << " " << max(0, A + B - N) << endl;
    }
    
    return 0;
}
