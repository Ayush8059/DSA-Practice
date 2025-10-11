#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    vector<int> arr = {10, 25, 5, 40, 15};
    int n = arr.size();
    cout << "Largest element: " << largestElement(arr, n) << endl;
    return 0;
}
