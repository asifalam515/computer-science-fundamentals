#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int target = 1000 - m;
        
        bool dp[n + 1][target + 1];
        
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= target; j++) {
                if (j == 0) {
                    dp[i][j] = true;
                } else {
                    dp[i][j] = false;
                }
            }
        }
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= target; j++) {
                if (a[i - 1] <= j) {
                    dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        
        
        if (dp[n][target]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
