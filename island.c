// This program finds contiguous regions of the matrix where the values in the region are greater than a certain threshold 
// The function takes 3 parameters - threshold, a minimum size, and an  arbitrarily sized matrix and returns a matrix of 
// booleans. 
#include <stdio.h>

void returnBooleanIslands (int threshold, int minSize, int matrix[5][5])
{
        int i = 0, j = 0;
        int row = (sizeof(matrix[0])/sizeof(matrix[0])); // length of row
        int column = (sizeof(matrix[0])/sizeof(matrix[0][0]))/row; // length of column
        for(i = 0; i < column; i++)
        {
                for(j = 0; j < column; j++)
                {
                        if ( (j == 0) || (j == column - 1) ) // print 0 for first and last element
                        {
                                printf("%d ", 0);
                        }
                        else
                        {
                                if (matrix[i][j] > threshold) // if it's greater than the threshold 
                                {
                                        printf("%d ",1); // print 1
                                }
                                else
                                {
                                        printf("%d ", 0); // otherwise it's smaller so print 0
                                }
                        }
		}
        }
        printf("\n");
}

int main()
{
	int threshold = 5;
	int minSize = 3;
	int matrix[5][5] = {{4, 4, 4, 2, 2},
			    {4, 2, 2, 2, 2},
			    {2, 2, 8, 7, 2},
			    {2, 8, 8, 8, 2},
			    {8, 2, 2, 2, 8}};
	returnBooleanIslands(threshold, minSize, matrix);
return 0;

}
