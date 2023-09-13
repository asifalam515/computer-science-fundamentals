#include <bits/stdc++.h>
using namespace std;


vector<vector<long long int>> memoization;

bool makeIt(int i, int N) {
    if (i == N) {
        return true;
    }
    if (i > N) {
        return false;
    }
    
    if (memoization[i][N] != -1) {
        return memoization[i][N];
    }

    bool add3 = makeIt(i + 3, N);

    bool multiply2 = makeIt(i * 2, N);

    return memoization[i][N] = add3 || multiply2;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        memoization.assign(N + 1, vector<long long int>(N + 1, -1));

        if (makeIt(1, N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
