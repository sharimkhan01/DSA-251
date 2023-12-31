#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5, 6};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Declaration of the iterator
    vector<int>::iterator it = v.begin();
    // Works just like a pointer
    cout << (*it) << endl;

    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << endl;
    }
}