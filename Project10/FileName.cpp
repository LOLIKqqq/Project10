#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMinIndex(const vector<int>& vec) {
    return distance(vec.begin(), min_element(vec.begin(), vec.end()));
}

int findMaxIndex(const vector<int>& vec) {
    return distance(vec.begin(), max_element(vec.begin(), vec.end()));
}

int findSumBetweenMinMax(const vector<int>& vec) {
    int minIndex = findMinIndex(vec);
    int maxIndex = findMaxIndex(vec);

    int startIndex = min(minIndex, maxIndex);
    int endIndex = max(minIndex, maxIndex);

    int sum = 0;
    for (int i = startIndex + 1; i < endIndex; ++i) {
        sum += vec[i];
    }

    return sum;
}

int main() {
    vector<int> vec = { 3, -5, 2, 8, -4, 10, -7 };

    int sum = findSumBetweenMinMax(vec);

    cout << "Sum of elements between min and max absolute value elements: " << sum << endl;

    return 0;
}