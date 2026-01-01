#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int low = 2, high = n;
    int set = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (mid * mid == n)
        {
            set = 1;
            break;
        }
        else if (mid * mid < n)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (set)
        cout << "it is a perfect square" << endl;
    else
        cout << "it is a NOT perfect square" << endl;
}