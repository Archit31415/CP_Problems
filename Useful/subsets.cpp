#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    for (int i=1; i<(1<<n); i++) {
        for (int j=0; j<n; j++) {
            if ((i>>j) & 1) {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}