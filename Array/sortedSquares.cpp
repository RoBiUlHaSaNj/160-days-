vector<int> sortedSquares(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n); // To store the sorted squares
    int left = 0;          // Pointer to the start of the array
    int right = n - 1;     // Pointer to the end of the array
    int pos = n - 1;       // Position to fill in the result array

    while (left <= right) {
        if (abs(arr[left]) > abs(arr[right])) {
            result[pos] = arr[left] * arr[left];
            left++;
        } else {
            result[pos] = arr[right] * arr[right];
            right--;
        }
        pos--;
    }

    return result;
}
