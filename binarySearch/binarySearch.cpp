#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2; // why not mid = (s+e)/2 => So as to not get out of range of INT , 2^31- 1

    while (start <= end)
    {
        if (arr[mid] == key){
            return mid;
        }
        else if (key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    int arr[]= {2,3,5,6,13,23};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 77;

    int result = binarySearch(arr, n, key);
    
    if (result != -1) {
        cout << "The key is present at Index " << result << endl;
    } else {
        cout << "The key is not present in the array." << endl;
    }

    return 0;
}