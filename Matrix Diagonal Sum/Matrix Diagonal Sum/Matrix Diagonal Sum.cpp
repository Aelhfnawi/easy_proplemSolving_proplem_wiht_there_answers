#include <iostream>
#include <vector>

using namespace std;

int diagonalSum(vector<vector<int>>& mat)
{
    int res = 0;
    int n = mat.size();

	for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < n; j++)
		{
			if (i == j || i + j == n - 1)
				res += mat[i][j];
		}
	}

		if (n % 2 == 0)
		{
			res -= mat[n / 2][n / 2];
		}

		return res;


}
int main() 
{
	// Example usage:
	vector<vector<int>> matrix = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int result = diagonalSum(matrix);
	cout << "Diagonal sum: " << result << endl;

	return 0;
}