#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_arr(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    vector<int> arr;
    cout << "Enter the number of elements in the vector: ";
    int n;
    cin >> n;
    cout << "Taking array input: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << "Printing the array: ";
    print_arr(arr);

    // This was my first approach. Didn't pass one test-case

    // // Sorting the array
    // sort(arr.begin(), arr.end());
    // cout << "printing sorted array: ";
    // cout << endl;
    // print_arr(arr);
    // cout << endl;
    // // printing the second largest element of the array
    // if (arr.size() <= 1)
    // {
    //     cout << "Exiting loop";
    //     cout << -1;
    // }
    // else
    // {

    //     int largest = arr[arr.size() - 1];
    //     cout << "Largest element: " << largest << endl;
    //     int second_largest = arr[arr.size() - 2];
    //     cout << "Second Largest element: " << second_largest << endl;
    //     // cout << second_largest << endl;
    //     int q = arr.size() - 2;
    //     while (largest == second_largest && q > 1)
    //     {
    //         // cout << "Value of q: " << q << endl;
    //         second_largest = arr[arr.size() - (q - 1)];
    //         q--;
    //     }
    //     cout << "Second Largest after loop: " << second_largest << endl;
    //     if (largest == second_largest)
    //     {
    //         cout << -1;
    //     }
    // }

    // Better approach
    // Sort the vector first into decreasing order
    sort(arr.begin(), arr.end()), greater<int>();
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            return arr[i];
        }
    }
    return -1;
}
