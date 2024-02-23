/*Given an integer array nums, return true if any value appears at least twice in the array
, and return false if every element is distinct.*/

#include <iostream>
using namespace std;
int main()
{
    int nums[100000], n;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cout << "Enter element " << i + 1 << " : ", cin >> nums[i];
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
                return true;
        }
    }
    return false;
}

