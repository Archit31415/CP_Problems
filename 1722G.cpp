#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        long long x = 0;
        for (int i=0; i<=n-3; i++) {
            x ^= i;
        }
        if (x != 0) {
            for (int i=0; i<=n-3; i++) {
                cout<<i<<" ";
            }
        } else {
            x ^= (0^(n-2));
            for (int i=1; i<=n-2; i++) {
                cout<<i<<" ";
            }
        }
        cout<<(1<<30)<<" ";
        cout<<(x^(1<<30))<<endl;
    }
    return 0;
}

/*
Go through all numbers from 0 to n-3. If their xor is non zero, next number is 2^30 and the next is the xor of everything else.
If the xor is zero, then consider elements from 1 to n-2, the xor is bound to be non zero, then the other two numbers are calculated similarly
*/