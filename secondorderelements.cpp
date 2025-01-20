#include <bits/stdc++.h>
using namespace std;

int ssmallest(vector<int> a, int n) {
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (smallest > a[i]) {
            ssmallest = smallest;
            smallest = a[i];
        } else if (smallest != a[i] && ssmallest > a[i]) {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

int slargest(vector<int> a, int n) {
    int largest = a[0];
    int slargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (largest < a[i]) {
            slargest = largest;
            largest = a[i];
        } else if (largest != a[i] && slargest < a[i]) {
            slargest = a[i];
        }
    }
    return slargest;
}

vector<int> GetSecondOrderElements(vector<int> a, int n) {
    if (n < 2) {
        cout << "Enter size greater than 1";
        return {};
    }
    int second_largest = slargest(a, n);
    int second_smallest = ssmallest(a, n);
    return {second_largest, second_smallest};
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> result = GetSecondOrderElements(a, n);
    if (!result.empty()) {
        cout << "Second Largest: " << result[0] << ", Second Smallest: " << result[1] << endl;
    }
    return 0;
}
