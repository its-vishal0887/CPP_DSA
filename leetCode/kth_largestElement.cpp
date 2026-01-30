#include<bits/stdc++.h>
using namespace std;

string kth_largest(vector<string>& arr, int k) {
    // Sort in ascending order and pick from the end for kth largest
    sort(arr.begin(), arr.end());
    if (k > 0 && k <= static_cast<int>(arr.size())) {
        return arr[arr.size() - k];
    }
    return string(); // empty string on invalid k
}

int main() {
    vector<string> arr = {"3","2","1","5","6","4"};
    string ele = kth_largest(arr, 2); // 2nd largest
    cout << ele << endl;
    return 0;
}