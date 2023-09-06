#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
long long int save[N];

int fibo(int n) {
    if (n == 0 || n == 1)
        return 1;

    // memoization
    if (save[n] != -1) {
        return save[n];
    }

    // answer na thakle answer ber korbo. then oi answer ta save kore rakbo. tarpor return kore debo
    long long int ans1 = fibo(n - 1);
    long long int ans2 = fibo(n - 2);
    save[n] = ans1 + ans2;
    
    return save[n];
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        save[i] = -1;
    }
    cout << fibo(n) << " ";

    return 0;
}
