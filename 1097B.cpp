#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for (int i=1; i<(1<<n); i++) {
        int angle = 0;
        for (int j=0; j<n; j++) {
            if ((i>>j) & 1) { 
                angle += arr[j];
            } else {
                angle -= arr[j];
            }
        }
        if (angle % 360 == 0) {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}