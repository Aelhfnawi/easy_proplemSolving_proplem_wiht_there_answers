#include <iostream>
using namespace std;

int odd_finder(int start, int end)
{
	int length = end - start+1;
	int count = length / 2;

	if (length % 2 == 1 && start % 2 == 1)
	{
		count+=1;
	}
	return count;

}

int main()
{
	cout << odd_finder(3 , 7);
}
