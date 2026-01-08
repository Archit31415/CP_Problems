#include <bits/stdc++.h>

using namespace std;

#define MAX_SIZE 1e6
#define p 1000000007

vector<long long> fac(MAX_SIZE+1);
vector<long long> inv(MAX_SIZE+1);

long long exp(long long x, long long n) {
    x %= p;
    long long res = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            res = (res*x)%p;
        }
        x = x*x%p;
        n /= 2;
    }
    return res;
}

void factorial() {
    fac[0] = 1;
    for (int i=1; i<=MAX_SIZE; i++) {
        fac[i] = fac[i-1]*i%p;
    }
}

void inverse() {
    inv[MAX_SIZE] = exp(fac[MAX_SIZE], p-2);
    for (int i=MAX_SIZE; i>0; i--) {
        inv[i-1] = inv[i]*i%p;
    }
}

long long choose(long long n, long long r) {
    return (fac[n]*inv[n-r]%p*inv[r]%p);
}

int main() {
    int n;
    cin>>n;
    factorial();
    inverse();
    while (n--) {
        int a, b;
        cin>>a>>b;
        cout<<choose(a, b)<<endl;
    }
    return 0;
}