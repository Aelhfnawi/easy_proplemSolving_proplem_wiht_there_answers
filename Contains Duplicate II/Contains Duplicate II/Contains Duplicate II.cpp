	#include <iostream>
	#include <vector>
	using namespace std;
	
	bool comparator(const vector<int>& array, int k)
	{
		for (size_t i = 0; i < array.size(); ++i)
		{
			if (i + k >= array.size())
			{
				return false;
			}
			else if (array[i] == array[i + k])
			{
				return true;
			}
		}
		return false;
	}

	int main()
	{
		vector<int> array = { 1,0,1,1 };

		int k = 1;

		cout << comparator(array,k);


	}
