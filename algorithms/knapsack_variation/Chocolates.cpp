#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        vector<int> A(n);

        for (int i = 0; i < n; i++) {
            cin >> A[i];
            sum += A[i];
        }

        if (sum % 2 == 0) {
            int targetSum = sum / 2;
            vector<vector<bool>> dp(n + 1, vector<bool>(targetSum + 1, false));

            for (int i = 0; i <= n; i++) {
                dp[i][0] = true;
            }

            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= targetSum; j++) {
                    if (A[i - 1] <= j) {
                        dp[i][j] = dp[i - 1][j] || dp[i - 1][j - A[i - 1]];
                    } else {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }

            if (dp[n][targetSum]) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
