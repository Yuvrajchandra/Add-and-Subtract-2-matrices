// C++ program for addition of two matrices

#include <bits/stdc++.h>
using namespace std;

// The order of the matrix is 3 x 3
#define size1 3
#define size2 3

// Function to add matrices mat1[][] & mat2[][],
// and store the result in matrix result[][]
void addMatrices(int mat1[][size2], int mat2[][size2], int result[][size2])
{
	for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Driver code
int main()
{
    // 1st Matrix
	int mat1[size1][size2] = { {9, 8, 7},
					           {6, 8, 0},
					           {5, 9, 2} };

    // 2nd Matrix
    int mat2[size1][size2] = { {4, 7, 6},
					           {8, 8, 2},
					           {7, 3, 5} };


    // Matrix to store the result
	int result[size1][size2];

    // Calling the addMatrices function
	addMatrices(mat1, mat2, result);

	cout << "mat1 + mat2 = " << endl;

    // Printing the sum of the 2 matrices
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
        {
            cout << result[i][j] << " ";
        }
		cout << endl;
	}

	return 0;
}
