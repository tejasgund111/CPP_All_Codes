#include <bits/stdc++.h>
using namespace std;

void printClockwise(int mat[][4], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }
}

void printAntiClockwise(int mat[][4], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }
}

void rotateClockwise(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();
    // transpose
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            cout << i << " " << j << "-> " << j << " " << i << " >>>> " << mat[i][j] << " " << mat[j][i] << endl;

            swap(mat[i][j], mat[j][i]);
        }
    }
    // reverse each row
    // for (int i = 0; i < n; i++)
    // {
    //     reverse(mat[i].begin(), mat[i].end());
    // }
}

int main()
{
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    printClockwise(mat, 4);
    cout << endl;
    printAntiClockwise(mat, 4);
    cout << endl;

    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    rotateClockwise(matrix);

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}