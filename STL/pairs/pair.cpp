#include <iostream>
using namespace std;

int main()
{
    // Pair declaration
    pair<int, string> p;

    // initializing the pair
    // first method
    p = make_pair(2, "abc");
    // second method
    p = {3, "abcd"};

    // printing / accessing the elements of the pair
    cout << p.first << " " << p.second;
    cout << endl;
    // Making array of pairs
    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    // printing the pair array
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
}