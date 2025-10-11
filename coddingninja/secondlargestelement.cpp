#include <vector>
#include <climits>
using namespace std;
int findSecondLargest(int n, vector<int> &arr)
{
    int largest = INT_MIN;
    int slargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest) {
            slargest = arr[i];
        }
    }

    if (slargest == INT_MIN)
        return -1;

    return slargest;
}