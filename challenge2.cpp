#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; // number of test cases
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K; // number of people and initial ATM amount
        vector<int> A(N); // money each person wants to withdraw

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        string result = "";
        for (int i = 0; i < N; ++i) {
            if (A[i] <= K) {
                result += '1';
                K -= A[i];
            } else {
                result += '0';
            }
        }

        cout << result << endl;
    }

    return 0;
}
