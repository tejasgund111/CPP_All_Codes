// Approach ->  Suppose we want to initialize a 2D vector of “n” rows and “m” columns, with a value 0

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n = 3;
	int m = 4;

	/*
	We create a 2D vector containing "n" elements each having the value "vector<int> (m, 0)".
	"vector<int> (m, 0)" means a vector having "m" elements each of value "0".
	Here these elements are vectors.
	*/
	vector<vector<int>> vec( n , vector<int> (m, 0));

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout << vec[i][j] << " ";
		}
		cout<< endl;
	}
	
	return 0;
}
