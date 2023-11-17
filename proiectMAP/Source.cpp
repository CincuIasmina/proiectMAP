#include <iostream>

using namespace std;

#define N 8

bool nuAtaca(int board[][N], int linie, int col) {
    for (int i = 0; i < col; i++) 
        if (board[linie][i] == 1)
            return false;
    for (int i = linie, j = col; i >= 0 && j >= 0; i--, j--) { 
            return false;
    }
    for (int i = linie, j = col; i < N && j >= 0; i++, j--) 
        if (board[i][j] == 1)
            return false;
    return true;
}

int main()
{
    int tabla[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            tabla[i][j] = 0;
    }
	return 0;
}