// Given a 2D matrix of size M*N, we need to print the matrix in a sinusoidal wave form. This can be achieved by printing the matrix row-wise.
// Now when the jth column is even we'll print the row from top-to-bottom and when the jth column the odd we'll print the row from bottom-to-top

#include <iostream>
using namespace std;

void wavePrint(int **input, int nRows, int mCols)
{
    int j=0;
    while(j<mCols)
    {
        if(j%2==0)  // Checking whether the jth column is odd or even. If even print top-to-bottom
        {
           for(int i=0;i<nRows;i++)
           {
               cout<<input[i][j]<<" ";
           }
        }
        else   // Otherwise print bottom-to-top
        {
            for(int i=nRows-1;i>=0;i--)
            {
                cout<<input[i][j]<<" ";
            }
        }
        j++;
    }
}

int main()
{
	int t;
    cout<<"Enter the number of test cases to run  : ";
	cin >> t;
	while (t--)
	{
		int row, col;
        cout<<"Enter the size of the row and the column  : ";
		cin >> row >> col;
		int **input = new int *[row];
        cout<<"Enter the values corresponding to the row and te column  : ";
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	}
}