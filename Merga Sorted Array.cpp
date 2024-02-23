/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order,
and two integers m and n,
representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function,
but instead be stored inside the array nums1.
To accommodate this, nums1 has a length of m + n,
where the first m elements denote the elements that should be merged,
and the last n elements are set to 0 and should be ignored. nums2 has a length of n.*/

#include <iostream>
using namespace std;
int main()
{
    int n, m, nums1[200], nums2[200];
    int n1, n2;
    cout << "Enter number of first elements: "; cin >> n1;
    for (int i = 0; i < n1; i++)
        cout << "Element " << i + 1 << " : ", cin >> nums1[i];
    cout << "Enter number of second elements: "; cin >> n2;
    for (int i = 0; i < n2; i++)
        cout << "Element " << i + 1 << " : ", cin >> nums2[i];
    cout << "m= "; cin >> m;
    cout << "n= "; cin >> n;
    int j = 0;
    for (int i = m ; i < m + n; i++)
        nums1[i] = nums2[j++];
    int temp;
    for (int i = 0; i < n + m-1; i++)
        if (nums1[i] > nums1[i + 1]) temp = nums1[i],nums1[i]=nums1[i+1],nums1[i+1]=temp;
    for (int i = 0; i < m + n; i++)
        cout << nums1[i]<<" ";
    
}
