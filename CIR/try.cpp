#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Function to find a subarray with a given sum
void findSubarrayWithGivenSum(const vector<int>& arr, int targetSum) {
    unordered_map<int, int> sumMap; // To store cumulative sums and their indices
    int currentSum = 0; // Initialize current sum

    for (int i = 0; i < arr.size(); i++) {
        currentSum += arr[i]; // Update current sum

        // Check if current sum equals the target sum
        if (currentSum == targetSum) {
            cout << "Subarray with given sum found between indexes 0 and " << i << endl;
            return;
        }

        // Check if there is a subarray (ending at index i) with the required sum
        if (sumMap.find(currentSum - targetSum) != sumMap.end()) {
            cout << "Subarray with given sum found between indexes " 
                 << sumMap[currentSum - targetSum] + 1 << " and " << i << endl;
            return;
        }

        // Store the current sum in the map with its index
        sumMap[currentSum] = i;
    }

    cout << "No subarray with given sum exists" << endl; // If no subarray is found
}

// Driver code
int main() {
    vector<int> arr = {2, 12, -2, -20, 10}; // Example array
    int targetSum = -10; // Example target sum

    findSubarrayWithGivenSum(arr, targetSum);
    
    return 0;
}
