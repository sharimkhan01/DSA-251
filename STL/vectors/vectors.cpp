#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // Vectors are dynamic arrays that can expand when it is  almost full

    // Declaration of the vector
    // Vectors can be of any dataType, even containers.
    vector<int> v;

    // Taking inputs inside a vector
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        // To push elements in the back of the vector
        v.push_back(x); // o(1) time complexity
    }
    // To delete element from the back of the vector
    // v.pop_back();

    // We can copy one vector to another vector
    // vector<int> v2 = v;
}