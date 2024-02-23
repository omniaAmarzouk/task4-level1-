// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

#include <iostream>
using namespace std;
int main()
{
	int nums[100000], n, product[100000];
	cout << "Enter number: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cout << "Enter element " << i + 1 << " : ", cin >> nums[i];
	for (int i = 0; i < n; i++)
	{
		product[i] = 1;
		for (int j = 0; j < n; j++)
		{
			if (i == j) continue;
			product[i] *= nums[j];
		}
	}
	for (int i = 0; i < n; i++)
		cout << "Product to element " << i + 1 << " is: " << product[i] << endl;
}

