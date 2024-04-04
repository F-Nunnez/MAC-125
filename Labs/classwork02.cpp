/*
    Write a function to add two matrices, a and b, and save the result in c.

    Each element cij is aij + bij. Write a test program that prompts the user to enter two 3 x 3 matrices and displays their addition.

    Let your output display the values of
    cij = aij + bij
*/

#include <iostream>
using namespace std;

int main() {

    int i, j, A[3][3], B[3][3], C[3][3];

    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << "Enter value at A["<<i<<"]["<<j<<"]:\n";
            cin >> A[i][j];
            cout << "Enter value at B["<<i<<"]["<<j<<"]:\n";
            cin >> B[i][j];

            C[i][j] = A[i][j] + B[i][j];
        }
    }

    int x, z; 
    for (x = 0; x < 3; x++) {
        for (z = 0; z < 3; z++) {
            cout << "[" << C[x][z] << "]"<< " ";
        }
        cout << endl;
    }
    return 0;
}