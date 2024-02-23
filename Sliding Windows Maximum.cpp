/*You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right.
You can only see the k numbers in the window. Each time the sliding window moves right by one position.
Return the max sliding window.*/

#include <iostream>
using namespace std;
int main()
{
	int nums[100000], n, k, max;
	cout << "Enter number of elements: "; cin >> n;
	cout << "Enter slide size: "; cin >> k;
	for (int i = 0; i < n; i++)
		cout << "Enter element " << i + 1 << " : ", cin >> nums[i];
	max = nums[0];
	for (int i = 0; i <= n-k; i++)
	{
		for (int j = i; j < k+i; j++)
			if (nums[j] > max) max = nums[j];
		cout << max << " ";
	}
}