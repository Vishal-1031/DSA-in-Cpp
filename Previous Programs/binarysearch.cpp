// C++ program to implement iterative Binary Search
#include <iostream>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        /*Ensures Correct Termination: Using low <= high ensures that the search terminates correctly even 
        when the search space reduces to a single element. When low and high point to the same element, it's 
        important to continue the search to check if that single element is the target. Using low < high
         would prematurely terminate the search when there's only one element left to check.
        Prevents Infinite Loop: If we use low < high and the target is not found in the array, there's a risk of
         entering an infinite loop. This can happen because mid will always be equal to low when low == high, and 
         the algorithm would repeatedly try to adjust low or high without making progress towards finding the target*/
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

// Driver code
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 50;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
