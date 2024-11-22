#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int k;
        cin >> k; // Total number of integers
        vector<int> a(k);

        for (int i = 0; i < k; ++i) {
            cin >> a[i]; // Read integers
        }

        sort(a.begin(), a.end()); // Sort the array

        // Output the smallest two elements as dimensions
        cout << a[0] << " " << a[1] << endl;
    }

    return 0;
}
