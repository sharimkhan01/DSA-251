#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_v(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Size of the array
    int n;
    // cout << "Enter size of array: ";
    cin >> n;
    // cout << "value of n: " << n << endl;
    vector<int> arr;
    // Input for the array
    // cout << "Enter elements into array";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    // Taking input of k;
    // cout << "Enter the valur of k: ";
    int k;
    cin >> k;
    print_v(arr);
    // Rotating the vector by k
    // first loop to swap elements k number of times
    cout << "Array size :" << arr.size() << endl;
    ;
    for (int i = 0; i < k; i++)
    {
        // second loop to swap the elements
        for (int j = 0; j < arr.size() - 2; j++)
        {
            swap(arr[j], arr[j + 1]);
            cout << "arr[i]: " << arr[j] << "arr[i+1]" << arr[j + 1] << endl;
        }
    }
    cout << endl;
    print_v(arr);
}