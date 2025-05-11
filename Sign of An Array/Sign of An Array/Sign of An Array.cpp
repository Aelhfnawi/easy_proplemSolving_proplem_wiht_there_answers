#include <iostream>
using namespace std;

int sign(double arr[], int size)
{
    int neg = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i]<0)
			neg++;
	}
	return (neg % 2 == 0) ? 1 : 0;
}

int main()
{
	double arr[] = { -1,-2,-3,-4,3,2,1};
	int size = sizeof(arr);
	cout << sign(arr, size);
}
