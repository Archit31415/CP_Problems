#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        long long z;
        cin>>n>>z;
        long long maximum = LLONG_MIN;
        for (int i=0; i<n; i++) {
            long long x;
            cin>>x;
            maximum = max(maximum, (x|z));
        }
        cout<<maximum<<endl;
    }

    return 0;
}

/*
doing or operation of an element repeatedly with submasks of z will not increase its value. answer will be the maximum of or with z over all elements
*/
