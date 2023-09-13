#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    // Create a DP table
    bool dp[n + 1][s + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = true;
    }

    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = false;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            dp[i][j] = dp[i - 1][j]; // Exclude the current element

            if (a[i - 1] <= j)
            {
                dp[i][j] = dp[i][j] || dp[i - 1][j - a[i - 1]]; // Include the current element
            }
        }
    }

    vector<int> v;
    for (int j = 0; j <= s / 2; j++)
    {
        if (dp[n][j])
            v.push_back(j);
    }

    // Calculate the minimum absolute difference between sums
    int ans = INT_MAX;
    for (int val : v)
    {
        int s1 = val;
        int s2 = s - s1;
        int currentDiff = abs(s1 - s2);
        ans = min(ans, currentDiff);
    }

    cout << ans << endl;
    return 0;
}
