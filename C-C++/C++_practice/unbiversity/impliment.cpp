#include <iostream>
#include <vector>
using namespace std;

vector<int> nums;
int divide(int left, int right) {
    int pivot = nums[right];
    int index = left - 1;
    int j = left;

    while (j < right) {
        if (nums[j] <= pivot) {
            index++;
            swap(nums[index], nums[j]);
        }
        j++;
    }
    swap(nums[index + 1], nums[right]);
    return index + 1;
}
void quickSort(int left, int right) {
    if (left < right) {
        int mid = divide(left, right);
        quickSort(left, mid - 1);
        quickSort(mid + 1, right);
    }
}
int main() {
    int size;
    cin >> size;
    nums.resize(size);
    int i = 0;
    while (i < size) {
        cin >> nums[i];
        i++;
    }
    quickSort(0, size - 1);
    i = size - 1;
    while (i >= 0) {
        cout << nums[i] << " ";
        i--;
    }
}
