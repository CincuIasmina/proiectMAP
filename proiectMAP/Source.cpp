#include <iostream>

using namespace std;

#define N 8

int solutii = 0;

bool nuAtaca(int board[][N], int linie, int col) {
    for (int i = 0; i < col; i++) 
        if (board[linie][i] == 1)
            return false;
    for (int i = linie, j = col; i >= 0 && j >= 0; i--, j--) { 
        if (board[i][j] == 1)
            return false;
    }
    for (int i = linie, j = col; i < N && j >= 0; i++, j--) 
        if (board[i][j] == 1)
            return false;
    return true;
}

bool rezolvaTabla(int tabla[][N], int col) {
    if (col == N) { 
        cout << "-------------------------------" << endl;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++)
                cout << tabla[i][j] << " ";
            cout << endl;
        }
        cout << "-------------------------------" << endl;
        solutii++;
    }
    for (int i = 0; i < N; i++) {
        if (nuAtaca(tabla, i, col)) {
            tabla[i][col] = 1;
            if (rezolvaTabla(tabla, col + 1))
                return true;
            tabla[i][col] = 0;
        }
    }
    return false;
}

int main()
{
    int tabla[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            tabla[i][j] = 0;
    }
    rezolvaTabla(tabla, 0);
    cout << "Numarul de solutii este: " << solutii;
	return 0;
}