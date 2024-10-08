#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int pagesum = 0;
    int studentCount = 1;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int allocateBook(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4; // No of books
    int m = 2; // No of students
    /*
    We have to allocate books among m=2 students such that
    they get the minimum of maximum pages of book

    10| 20 30 40 -> 10 and 20+30+40 = 90 max(10, 90)= 90
    10 20 | 30 40 -> 30 and 30+40 = 70 max(10, 70)= 70
    10 20 30 | 40 -> 60 and 40 max = 60

    Therefore min(90, 70 , 60 ) = 60..Ans
    Thus initial 3 books to 1st and 1 book to 2nd
    */

    cout << allocateBook(arr, n, m) << endl;
    return 0;
}