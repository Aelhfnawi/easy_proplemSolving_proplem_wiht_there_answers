#include <iostream>
#include <vector>
using namespace std;

void shuffler(vector<int>& array, int N)
{
	vector<int>arr;
	for (int i = 1; i <= array.size()/2; i++)
	{
		arr.push_back(i);
		arr.push_back(i + N);
	}
	
	for (int  i = 0; i < arr.size(); i++)
	{
		cout << arr[i]<< " ";
	}
}

int main()
{
	vector<int> array = { 1,2,3,4,5,6,7,8,9 };
	int N = array.size() / 2;

	shuffler(array, N);
}

