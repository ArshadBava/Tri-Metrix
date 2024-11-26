#include <iostream>
using namespace std;

// Function to display an upper triangular matrix
void upperTriangularMatrix(int matrix[][10], int size) {
    cout << "Upper Triangular Matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i > j) {
                cout << "0 ";
            } else {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
}

// Function to display a lower triangular matrix
void lowerTriangularMatrix(int matrix[][10], int size) {
    cout << "Lower Triangular Matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i < j) {
                cout << "0 ";
            } else {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the square matrix: ";
    cin >> size;

    int matrix[10][10];
    cout << "Enter the elements of the matrix (" << size << "x" << size << "):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    upperTriangularMatrix(matrix, size);
    lowerTriangularMatrix(matrix, size);

    return 0;
}

