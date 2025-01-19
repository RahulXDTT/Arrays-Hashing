#include <bits/stdc++.h>
using namespace std;

int main() {
    string s[3]; // Array to store strings
    // Fixed syntax error: `s.size` is invalid for arrays; replaced with `100` since array size is fixed.
    for (int i = 0; i < 3; i++) { 
        cin >> s[i];
    }

    map<string, int> mpp; // Map to count occurrences of strings
    // Fixed syntax error: `s.size` is invalid for arrays; replaced with `100`.
    for (int i = 0; i < 3; i++) { 
        mpp[s[i]]++;
    }

    for (auto it : mpp) { // Iterating over the map
        cout << it.first << "->" << it.second << endl;
    }

    int q; // Number of queries
    cin >> q;
    while (q--) {
        string s2match;
        cin >> s2match;
        // Fetch and output the count of the string from the map
        cout << mpp[s2match] << endl;
    }

    return 0; // Added return statement to indicate successful program termination
}
