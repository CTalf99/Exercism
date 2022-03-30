// grains of wheat on a chessboard

#include <iostream>
#include <math.h>

int main()
{
    const int row = 8;
    const int col = 8;
    long long int board [row][col];

    for (int i = 0; i<row; i++)
    {   
        for (int j = 0; j<col; j++)
        {
            board [i][j] = pow(2, j+8*i);
            //board [i][j] = 3;
            std::cout << board[i][j] << ", ";
        }
    std::cout << std::endl;
    }
}