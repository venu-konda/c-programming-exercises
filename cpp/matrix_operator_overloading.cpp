#include <iostream>

#define MAX 3

class Matrix {
    int arr[MAX][MAX];
public:
    Matrix(int [MAX][MAX]);
    Matrix operator+(const Matrix&);
    void Print();
};

Matrix::Matrix(int a[MAX][MAX]) {
    for(int i = 0; i < MAX; i++)
        for(int j = 0; j < MAX; j++)
            arr[i][j] = a[i][j];
}

Matrix Matrix::operator+(const Matrix& other) {
    Matrix result(arr);
    for(int i = 0; i < MAX; i++)
        for(int j = 0; j < MAX; j++)
            result.arr[i][j] += other.arr[i][j];
    return result;
}

void Matrix::Print() {
    for(int i = 0; i < MAX; i++, std::cout << std::endl)
        for(int j = 0; j < MAX; j++)
            std::cout << arr[i][j] << "  ";
}

int main() {
    int array[MAX][MAX];
    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++) {
            std::cout << "Enter the element " << i << " " << j << ":: ";
            // std::cin >> array[i][j];
            std::cin >> array[i][j];
        }
    }

    Matrix m1(array);
    Matrix m2(array);
    std::cout << "------------------" << std::endl;
    m1.Print();
    std::cout << "------------------" << std::endl;
    m2.Print();
    Matrix m3 = m1 + m2;
    std::cout << "------------------" << std::endl;
    m3.Print();

    return 0;
}

