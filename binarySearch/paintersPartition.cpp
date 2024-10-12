#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid)
{
    int painterCount = 1;
    int boardSum = 0; // Sum of boards a painter paints
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid) // If a single board is larger than 'mid', it's impossible
            return false;

        if (boardSum + arr[i] <= mid)
        {
            boardSum += arr[i];
        }
        else
        {
            painterCount++; // Assign this board to a new painter
            boardSum = arr[i]; // Start with the current board for the new painter
            
            if (painterCount > k)
                return false; // If we exceed the number of painters, return false
        }
    }
    
    return true; // If all boards are assigned within the painter limit
}

int main()
{
    /* N Boards with length in form of array
       K painters
       1 painter takes 1 unit of time to paint 1 unit of board
       min time to paint all boards?  (Continuous section constraint)
    */
    
    int arr[] = {10, 20, 30, 40};
    int k = 2; // Number of painters
    int n = 4; // Number of boards
    
    // Binary search for the minimum time
    int s = 0, sum = 0, ans = -1;
    
    for (int i = 0; i < n; i++)
    {
        sum += arr[i]; // Total time to paint all boards
    }

    int e = sum; // Maximum possible time is the sum of all boards
    int mid = s + (e - s) / 2;
    
    while (s <= e)
    {
        if (isPossible(arr, n, k, mid))
        {
            ans = mid; // Update the answer
            e = mid - 1; // Try to find a smaller time
        }
        else
        {
            s = mid + 1; // Increase the minimum time
        }
        
        mid = s + (e - s) / 2;
    }

    cout << "Minimum time to paint all boards: " << ans << endl;
    return 0;
}
