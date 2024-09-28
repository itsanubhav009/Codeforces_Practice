#include<iostream>
#include<vector>
#include<string>

using namespace std;

int calc(int size1, string x, int size2, string s) {
    int target = 0;
    
    // Keep concatenating until x is at least as large as s
    while (x.size() < s.size()) {
        x += x;  // Concatenate x with itself
        target++;
    }
    
    // Check if s is a substring of the current x
    if (x.find(s) != string::npos) {
        return target;
    }

    // Check for potential cyclic match of s within x + x (to simulate wrapping around)
    string extended_x = x + x;
    if (extended_x.find(s) != string::npos) {
        return target + 1;  // One more concatenation would be needed
    }

    return -1;  // No match found
}

int main() {
    int no_of_test_cases;
    cin >> no_of_test_cases;
    vector<int> ans;

    for (int i = 0; i < no_of_test_cases; i++) {
        int size1, size2;
        string x, s;
        cin >> size1 >> size2 >> x >> s;
        int result = calc(size1, x, size2, s);
        ans.push_back(result);
    }

    // Output all results
    for (int result : ans) {
        cout << result << endl;
    }

    return 0;
}
